#!/bin/bash

read -p "Enter a number: " n

f1=0

f2=1

echo "Fibonacci series : "

echo $f1

echo $f2

if [ $n -gt 2 ]

then

for((i=0;i<=n;i++))

do

f3=$f1+$f2

echo $f3 | bc

f1=$f2

f2=$f3

done

fi

