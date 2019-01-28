#!/bin/bash

echo -n "Enter number of units consumed:"
read b

if [ $b -le 50 ]
then
	f=100
elif [ $b -ge 51 ]&&[ $b -le 100 ]
then
	f=$((1.5*$b))
elif [ $b -ge 101 ]&&[ $b -le 200 ]
then
	f=$((2*$b))
elif [ $b -ge 201 ]&&[ $b -le 400 ]
then
	f=$((3*$b))
elif [ $b -ge 401 ]
then
	f=$((5*$b))
fi

echo The fare is $f
