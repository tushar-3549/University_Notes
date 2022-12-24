#!/bin/bash

sum=0

read -p "Enter a digits : " n

while [ $n -gt 0 ]

do

rem=`expr $n % 10`

sum=`expr $sum + $rem`

n=`expr $n / 10`

done

echo "The summation of the degit : $sum"
