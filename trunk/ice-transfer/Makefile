CLIENT		= client
SERVER		= server

LINKLIB		= -L/usr/lib/nptl -lpthread -lrt -L/usr/lib -lIce -lIceUtil
CFLAGS		= -Wall

TARGETS		= $(CLIENT) $(SERVER)

OBJS		= Callback.o CallbackSenderI.o 
COBJS		= Client.o
SOBJS		= Server.o



SRCS		= $(OBJS:.o=.cpp) \
			  $(COBJS:.o=.cpp)\
			  $(SOBJS:.o=.cpp)



CPPFLAGS	:= -I. $(CPPFLAGS)

$(CLIENT): $(OBJS) $(COBJS)
	$(CXX) -o $@ $(OBJS) $(COBJS)  $(LINKLIB) 

$(SERVER): $(OBJS) $(SOBJS)
	$(CXX) -o $@ $(OBJS) $(SOBJS)  $(LINKLIB) 

all: $(TARGETS)

clean:
	rm -f $(SERVER) $(CLIENT) *.o
