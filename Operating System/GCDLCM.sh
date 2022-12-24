#!/bin/bash

read -p "Enter two numbers: " m n

temp=`expr $m \* $n`

while [ $m -ne $n ]

do

if [ $m -gt $n ]

then

m=`expr $m - $n`

else

n=`expr $n - $m`

fi

done

echo GCD=$n

lcm=`expr $temp / $n`

echo LCM=$lcm

