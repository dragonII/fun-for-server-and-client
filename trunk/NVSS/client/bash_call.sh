#!/bin/sh

PRG=nsclient
PWD=`dirname $0`
echo "pwd :" $PWD
CMD="$PWD/$PRG"
O_PATH="/data/data_pool"

for i in `seq 10`
do
$CMD $O_PATH/out_$i &
done

