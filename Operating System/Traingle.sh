#!/bin/bash

read -p "Enter base : " base

read -p "Enter height: " height

area=`echo "scale=2;0.5*$base*$height"|bc`

echo "The area of Triangle is : $area"

