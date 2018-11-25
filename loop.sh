#!/bin/bash
 for
word =0
for a in $(cat $1)
do
word=$(($word+1))
done
echo $word

