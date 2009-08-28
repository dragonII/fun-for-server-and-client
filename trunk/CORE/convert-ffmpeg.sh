#!/bin/sh

res="352x240"
frame_rate=30

/usr/local/bin/ffmpeg -i $1  -ab 64k -ar 48000 -s $res -r $frame_rate -vcodec mpeg4 -b 256k  -g 30  Stream4Test.avi

