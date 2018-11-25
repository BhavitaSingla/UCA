#!/bin/bash
read -p "ENter a number" num
if [ $num -eq 100 ]; then
echo "100"
elif [ $num -lt 100 ]; then
echo "less"
else
echo "greater"
fi
