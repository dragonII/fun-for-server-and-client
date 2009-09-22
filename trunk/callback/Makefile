CLIENT		= client
SERVER		= server
DEBUG       = -g
SLICE2CPP   = /usr/bin/slice2cpp
ICE_FILE    = Callback.ice

LINKLIB		= -L/usr/lib/nptl -lpthread -lrt -L/usr/lib -lIce -lIceUtil

TARGETS		= $(SERVER) $(CLIENT)

OBJS		= Callback.o CallbackSenderI.o 
COBJS		= Client.o
SOBJS		= Server.o



SRCS		= $(OBJS:.o=.cpp) \
			  $(COBJS:.o=.cpp)\
			  $(SOBJS:.o=.cpp)



CPPFLAGS	:= -I. $(CPPFLAGS) -Wall

.PHONY: all
all: $(TARGETS)

%.h %.cpp: %.ice
	$(SLICE2CPP) $(ICE_FILE)

$(CLIENT): $(OBJS) $(COBJS)
	$(CXX) -o $@ $(OBJS) $(COBJS) $(DEBUG) $(CPPFLAGS) $(LINKLIB) 

$(SERVER): $(OBJS) $(SOBJS)
	$(CXX) -o $@ $(OBJS) $(SOBJS) $(DEBUG) $(CPPFLAGS) $(LINKLIB) 


clean:
	rm -f $(SERVER) $(CLIENT) *.o Callback.cpp Callback.h
