#!/bin/sh

slice2cpp Dict.ice || exit -1

c++ -g -I. -I.. -I$ICE_HOME/include -c Dict.cpp DictReceiverI.cpp Server.cpp Client.cpp || exit -1
#c++ -o client FileSystem.o FilesystemI.o Server.o  -L$ICE_HOME/lib -lIce -lIceUtil
c++ -g -o server Dict.o DictReceiverI.o Server.o -L/usr/lib/nptl -lpthread -lrt -L$ICE_HOME/lib -lIce -lIceUtil || exit -1
c++ -g -o client Dict.o Client.o -L/usr/lib/nptl -lpthread -lrt -L$ICE_HOME/lib -lIce -lIceUtil || exit -1
