#!/bin/sh

g++ -I. -I.. -I$ICE_HOME/include -c Callback.cpp CallbackSenderI.cpp 
g++ -I. -I.. -I$ICE_HOME/include -c Client.cpp Server.cpp 
#c++ -o client FileSystem.o FilesystemI.o Server.o  -L$ICE_HOME/lib -lIce -lIceUtil
g++ -o server Callback.o CallbackSenderI.o Server.o -L/usr/lib/nptl -lpthread -lrt -L$ICE_HOME/lib -lIce -lIceUtil
g++ -o client Callback.o CallbackSenderI.o Client.o -L/usr/lib/nptl -lpthread -lrt -L$ICE_HOME/lib -lIce -lIceUtil
