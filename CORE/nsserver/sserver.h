#ifndef SSERVER_H
#define SSERVER_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <time.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <fcntl.h>


#define G_SUCCESS 1
#define G_FAIL    0
#define G_TRUE      1
#define G_FALSE     0
#define G_ENABLE    1
#define G_DISABLE   0

#define G_SERVER_PORT "8888"
#define G_LOCALHOST "127.0.0.1"
#define G_MEDIA_FILE "/data/media_files/input_file"
//#define G_MEDIA_FILE "/tmp/test_file"
#define G_BLOCK_SIZE 1024
#define FILE_MODE (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)

enum HTTPState {
    HTTPSTATE_WAIT_REQUEST,
    HTTPSTATE_SEND_HEADER,
    HTTPSTATE_SEND_DATA_HEADER,
    HTTPSTATE_SEND_DATA,          /* sending TCP or UDP data */
    HTTPSTATE_SEND_DATA_TRAILER,
    HTTPSTATE_RECEIVE_DATA,
    HTTPSTATE_WAIT_FEED,          /* wait for data from the feed */
    HTTPSTATE_READY,
};



/* context associated with one connection */
typedef struct HTTPContext {
	int cmd;
    enum HTTPState state;
    int sockfd; /* socket file descriptor */
    struct sockaddr_in from_addr; /* origin */
    struct pollfd *poll_entry; /* used when polling */
    int64_t timeout;
    char *buffer_ptr, *buffer_end;
    int http_error;
    struct HTTPContext *next;
    int got_key_frame; /* stream 0 => 1, stream 1 => 2, stream 2=> 4 */
    int data_count;

    int last_packet_sent; /* true if last data packet was sent */
    char url[128];
    int buffer_size;
    char *buffer;
    int is_packetized; /* if true, the stream is packetized */
    int packet_stream_index; /* current stream for output in state machine */

} HTTPContext;

#endif
