#!/bin/sh

c++ -g -I. -I.. -I$ICE_HOME/include -c Callback.cpp CallbackSenderI.cpp Server.cpp Client.cpp
#c++ -o client FileSystem.o FilesystemI.o Server.o  -L$ICE_HOME/lib -lIce -lIceUtil
c++ -g -o server Callback.o CallbackSenderI.o Server.o -L/usr/lib/nptl -lpthread -lrt -L$ICE_HOME/lib -lIce -lIceUtil
c++ -g -o client Callback.o CallbackSenderI.o Client.o -L/usr/lib/nptl -lpthread -lrt -L$ICE_HOME/lib -lIce -lIceUtil
