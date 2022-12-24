#!/bin/bash

read -p "Enter a number: " n

fact=1

for ((i=1;i<=n;i++))

do

fact=$(($fact*$i))

done

echo "The fectorial of number: $fact"

