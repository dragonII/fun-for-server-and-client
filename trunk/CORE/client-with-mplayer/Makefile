CC=gcc
CFLAGS=-O2 -Wall
SOURCE=sclient.c

OBJ=$(SOURCE:.c=.o)

TARGET=nsclient

.c.o:
	$(CC) -c $(CFLAGS) $<

$(TARGET):$(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

clean:
	rm -rf *.o $(TARGET)
