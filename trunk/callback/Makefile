CLIENT		= client
SERVER		= server
DEBUG       = -g

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
	$(CXX) -o $@ $(OBJS) $(COBJS) $(DEBUG) $(LINKLIB) 

$(SERVER): $(OBJS) $(SOBJS)
	$(CXX) -o $@ $(OBJS) $(SOBJS) $(DEBUG) $(LINKLIB) 

all: $(TARGETS)

clean:
	rm -f $(SERVER) $(CLIENT) *.o
