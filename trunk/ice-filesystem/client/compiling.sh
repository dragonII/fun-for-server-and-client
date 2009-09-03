#!/bin/sh

c++ -I. -I.. -I$ICE_HOME/include -c ../FileSystem.cpp client.cpp
c++ -o Client FileSystem.o client.o -L/usr/lib/nptl -lpthread -lrt -L$ICE_HOME/lib -lIce -lIceUtil
