#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <sys/stat.h>
#include <fcntl.h>

#define G_BLOCK_SIZE 1024
#define FILE_MODE (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)
#define G_FILE_TO_PLAY "/data/data_pool/Stream4Test.avi"
#define G_PLAYER       "/usr/bin/mplayer"

static void bail(const char *on_what)
{
	fputs(strerror(errno), stderr);
	fputs(": ", stderr);
	fputs(on_what, stderr);
	fputc('\n', stderr);
	exit(1);
}

int main(int argc, char **argv)
{
	int z;
	int i_ret = 0, sizetowrite = 0;
	char *srvr_addr = NULL;
	struct sockaddr_in addr_srvr;
	socklen_t len_inet;
	int s, fd;
	char fbuf[G_BLOCK_SIZE];
	char *file_name = "/dev/null";
	int maxfdp;
    pid_t pid;
	fd_set rset, wset;

	srvr_addr = "192.168.3.100";

	if(argc >= 2)
		file_name = argv[1];

	memset(&addr_srvr, 0, sizeof(addr_srvr));
	addr_srvr.sin_family = AF_INET;
	addr_srvr.sin_port = htons(atoi("8888"));
	addr_srvr.sin_addr.s_addr = inet_addr(srvr_addr);

	len_inet = sizeof(addr_srvr);

	s = socket(PF_INET, SOCK_STREAM, 0);
	if(s == -1)
		bail("socket()");
	printf("Socket created\n");

	z = connect(s, (struct sockaddr *)&addr_srvr, len_inet);
	if(z == -1)
		bail("connect(2)");
	printf("Connected\n");

    pid = fork();
    if(pid > 0)
    {
        //fd = open(file_name, O_WRONLY | O_CREAT | O_TRUNC, FILE_MODE);
        fd = open(G_FILE_TO_PLAY, O_WRONLY | O_CREAT | O_TRUNC, FILE_MODE);
        if(fd < 0)
            bail("open failed");
        printf("file opened\n");
        
        maxfdp = fd + 1;
        FD_ZERO(&rset);
        FD_ZERO(&wset);
        
        for(;;)
        {
            FD_SET(s, &rset);
            
            i_ret = select(maxfdp, &rset, &wset, NULL, NULL);
            if(i_ret == 0) /* select timeout */
                continue;
            if(i_ret < 0)
            {
                if(errno == EINTR)
                    continue;
                else
                    bail("select error");
            }
            /* descriptor is readable or writable */
            if(FD_ISSET(s, &rset))
            {
                memset(fbuf, 0, G_BLOCK_SIZE);
                z = read(s, fbuf, sizeof(fbuf));
                if(z == 0)
                {
                    close(fd);
                    close(s);
                    if(waitpid(pid, NULL, 0) > 0)
                        printf("Child exit normally\n");
                    break;
                }
                if(z < 0)
                {
                    fprintf(stderr, "read from socket error, readsize: %d, retry\n", z);
                    continue;
                }
                sizetowrite = z;
                usleep(1000);
                if(write(fd, fbuf, sizetowrite) < 0)
                {
                    printf("sizetowrite: %d\n", sizetowrite);
                    bail("write to file error");
                }
            }
        }
    }/* Parent */
    if(pid == 0)
    {
        usleep(50000);
        if(execl(G_PLAYER, "mplayer", G_FILE_TO_PLAY, (char *)0) < 0)
        {
            printf("Call mplayer failed\n");
            exit(1);
        }
        exit(0);
    }
        
	return 0;
}

