CLIENT		= client
SERVER		= server
DEBUG       = -g

LINKLIB		= -L/usr/lib/nptl -lpthread -lrt -L/usr/lib -lIce -lIceUtil

TARGETS		= $(CLIENT) $(SERVER)

OBJS		= Callback.o CallbackSenderI.o 
COBJS		= Client.o
SOBJS		= Server.o



SRCS		= $(OBJS:.o=.cpp) \
			  $(COBJS:.o=.cpp)\
			  $(SOBJS:.o=.cpp)



CPPFLAGS	:= -I. $(CPPFLAGS) -Wall

$(CLIENT): $(OBJS) $(COBJS)
	$(CXX) -o $@ $(OBJS) $(COBJS) $(DEBUG) $(CPPFLAGS) $(LINKLIB) 

$(SERVER): $(OBJS) $(SOBJS)
	$(CXX) -o $@ $(OBJS) $(SOBJS) $(DEBUG) $(CPPFLAGS) $(LINKLIB) 

all: $(TARGETS)

clean:
	rm -f $(SERVER) $(CLIENT) *.o
