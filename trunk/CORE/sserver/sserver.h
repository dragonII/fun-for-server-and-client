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


#define G_SUCCESS   1
#define G_FAIL      0
#define G_TRUE      1
#define G_FALSE     0
#define G_ENABLE    1
#define G_DISABLE   0

#define G_SERVER_PORT  "8888"
#define G_LOCALHOST    "127.0.0.1"
#define G_MEDIA_FILE   "/data/media_files/input_file"
#define G_BLOCK_SIZE   1024
#define G_BUF_SIZE     512
#define G_CONTENT_SIZE 508
#define G_STREAM_SIZE  508
#define G_TOKEN_LEN    128
#define G_URL_LEN      128
#define G_ZERO_LEN     200
#define FILE_MODE (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)


enum DataType
{
	DATA_CMD,
	DATA_STREAM,
};

/* Define CMDs that servers will accept */
enum CMD
{
	CMD_REQUEST_PLAY,
	CMD_SEND_CANPLAY,
	CMD_SEND_NOPLAY,
	CMD_SEND_PLAY,
	CMD_REQUEST_SERVER_INFO,
	CMD_SEND_SERVER_INFO,
	CMD_PLAY,
	CMD_SEND_HEADER,
	CMD_SEND_DATA_HEADER,
	CMD_SEND_DATA,
	CMD_RECEIVE_DATA,
	CMD_READY,
	CMD_WAIT_REQUEST,
};

struct DataStream
{
	char stream[G_STREAM_SIZE];
} DataStream;


/* context associated with one connection */
typedef struct DataCMD 
{
	enum   CMD cmd;
    int    sockfd;                /* socket file descriptor */
    int    server_error;
    struct sockaddr_in from_addr; /* from which addr */
    char   *buffer_ptr;
	int    buffer_size;
    int    got_key_token;         /* G_TRUE => have, G_FALSE => dont have */
	char   token[G_TOKEN_LEN];
    int    data_count;
    char   url[G_URL_LEN];
    char   *buffer;
    int    is_packetized;         /* if true, the stream is packetized */
	
	char   zero[G_ZERO_LEN];      /* placeholder, ensure 512 bytes total */
} DataCMD;


/* content is relied on element DataType,                                    */
/* type=DATA_CMD    => content=DataCMD                                       */ 
/* type=DATA_STREAM => content=DataStream                                    */
/* when handling this struct, type casting is mandatory, for example:        */
/*   struct DataContent data;                                                */
/*   if(data.type == DATA_CMD)                                               */
/*      struct DataCMD *cmd = (struct DataCMD *)data.content;                */
/*   if(data.type == DATA_STREAM                                             */
/*      struct DataStream *stream = (struct DataCMD *)data.content;          */
/*	                                                                         */
typedef struct DataContent {
	enum DataType type;
	char content[G_CONTENT_SIZE];
} DataContent;

#endif
