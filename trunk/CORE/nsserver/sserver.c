#include "sserver.h"

static void bail(const char *on_what)
{
	if(errno != 0)
	{
		fputs(strerror(errno), stderr);
		fputs(": ", stderr);
	}
	fputs(on_what, stderr);
	fputc('\n', stderr);
	exit(1);
}


static void sigchld_handler(int signo)
{
	pid_t pid;
	int status;

	do
	{
		pid = waitpid(-1, &status, WNOHANG);
	}while(pid > 0);
	return;
}


static int process_conn(int sockfd)
{
	int fd;
	int n, z;
	char fbuf[G_BLOCK_SIZE];

	fd = open(G_MEDIA_FILE, O_RDONLY); 
	if(fd < 0)
		bail("Open file failed");
	memset(fbuf, 0, G_BLOCK_SIZE);
	
	n = read(fd, fbuf, G_BLOCK_SIZE);
	if(n < 0)
		bail("read file failed");
	while(n > 0)
	{
		z = write(sockfd, fbuf, n);
		memset(fbuf, 0, G_BLOCK_SIZE);
		if(z == -1)
			bail("write(2)");
		n = read(fd, fbuf, G_BLOCK_SIZE);
		usleep(1000);
	}
	close(fd);
	shutdown(sockfd, SHUT_WR);
	close(sockfd);
	//printf("out of while\n");
	return G_SUCCESS;
}


int socket_nonblock(int socket, int enable)
{   
	if (enable)
		return fcntl(socket, F_SETFL, fcntl(socket, F_GETFL) | O_NONBLOCK);
	else 
		return fcntl(socket, F_SETFL, fcntl(socket, F_GETFL) & ~O_NONBLOCK);
} 

static void srvr_addr_init(struct sockaddr_in *addr, const char *port)
{
	memset(addr, 0, sizeof(*addr));
	addr->sin_family = AF_INET;
	addr->sin_port = htons(atoi(port));
	addr->sin_addr.s_addr = INADDR_ANY;
}


static int socket_open_listen(struct sockaddr_in *addr)
{
	int server_fd;
	int so_reuseaddr = G_TRUE;
	int i_ret;

	server_fd = socket(PF_INET, SOCK_STREAM, 0);
	if(server_fd < 0)
		bail("socket fail");

	i_ret = setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR, &so_reuseaddr, sizeof(so_reuseaddr));
	if(i_ret < 0)
		bail("setsockopt fail");

    i_ret = bind(server_fd, (struct sockaddr *)addr, sizeof(*addr));
	if(i_ret < 0)
		bail("bind fail");
	
	i_ret = listen(server_fd, 5);
	if(i_ret < 0)
		bail("listen fail");

	//socket_nonblock(server_fd, G_ENABLE);

	return server_fd;
}


int main(int argc, char **argv)
{
	int i_ret;
	char *port_srvr = G_SERVER_PORT;

	struct sockaddr_in addr_srvr;   /* AF_INET */
	struct sockaddr_in addr_clnt;   /* AF_INET */

	socklen_t len_inet;
	int s, c;

	pid_t childpid;
	struct sigaction sigact;

	memset(&sigact, 0, sizeof(sigact));
	sigact.sa_handler = sigchld_handler;
	sigact.sa_flags = SA_NOCLDSTOP | SA_RESTART;
	sigaction(SIGCHLD, &sigact, NULL);

	srvr_addr_init(&addr_srvr, port_srvr);

	s = socket_open_listen(&addr_srvr);
	if(s < 0)
		bail("socket_open_listen failed");

	for(;;)
	{
		len_inet = sizeof(addr_clnt);
		c = accept(s, (struct sockaddr *)&addr_clnt, &len_inet);
		if(c < 0)
		{
			if(errno == EINTR)
				continue; /* system call is interrupted by signal, back to for */
			else
				bail("accept(2)");
		}

		if((childpid = fork()) == 0)
		{
			close(s); /* child closed listening socket */
			i_ret = process_conn(c);
			if(i_ret == G_FAIL)
				bail("process_conn()\n");
			exit(0);
		}

		close(c); /* parent closes connected socket */
	}
	return 0;
}
