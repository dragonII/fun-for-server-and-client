CC=gcc
CFLAGS=-O2 -Wall
SOURCE=sserver.c sserver.h

OBJ=$(SOURCE:.c=.o)

TARGET=nsserver

.c.o:
	$(CC) -c $(CFLAGS) $<

$(TARGET):$(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

clean:
	rm -rf *.o $(TARGET)
