#!/bin/sh

c++ -I. -I.. -I$ICE_HOME/include -c ../FileSystem.cpp FilesystemI.cpp Server.cpp
#c++ -o client FileSystem.o FilesystemI.o Server.o  -L$ICE_HOME/lib -lIce -lIceUtil
c++ -o server FileSystem.o FilesystemI.o Server.o -L/usr/lib/nptl -lpthread -lrt -L$ICE_HOME/lib -lIce -lIceUtil
