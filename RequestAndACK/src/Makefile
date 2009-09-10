CLIENT		= client
SERVER		= server
DEBUG       = -g
ICE_FILE    = RequestAndACK.ice
SLICE2CPP   = /usr/bin/slice2cpp
CPPFLAGS    = -Wall
SHARE       = -shared
LINKLIB		= -L/usr/lib/nptl -lpthread -lrt -L/usr/lib -lIce -lIceUtil
INCLUDEDIR  = -I. 

TARGET		= libSysCommunicate.so

OBJS		= RequestAndACK.o RequestReceiverI.o RequestSenderI.o
#COBJS		= Client.o
#SOBJS		= Server.o
#
ICE2CPP:
	$(SLICE2CPP) $(ICE_FILE) 

.cpp.o:$(ICE2CPP)
	$(CXX) -c $(CPPFLAGS) $(INCLUDEDIR) $(SHARE) $<

$(TARGET):$(OBJS)
	$(CXX)  $(CPPFLAGS) $(INCLUDEDIR) $(SHARE) $(LINKLIB) -o $@ $(OBJS)


#$(CLIENT): $(OBJS) $(COBJS)
#	$(CXX) -o $@ $(OBJS) $(COBJS) $(DEBUG) $(CPPFLAGS) $(LINKLIB) 
#
#$(SERVER): $(OBJS) $(SOBJS)
#	$(CXX) -o $@ $(OBJS) $(SOBJS) $(DEBUG) $(CPPFLAGS) $(LINKLIB) 
#
all: $(TARGET)

clean:
	rm -f *.o $(TARGET)
