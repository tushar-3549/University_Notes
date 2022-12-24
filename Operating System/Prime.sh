#!/bin/bash

read -p "Enter a number: " n

for ((i=2;i<=n/2;i++))

do

r=$(($n%$i))

if [ $r -eq 0 ]

then

echo "$n is not a prime number"

exit

fi

done

echo "$n is a prime number"

