#!/bin/bash

echo -n Enter a Number:
read n

num=$n
dg=0
sum=0

while [ $num -ne 0 ]
do
	dg=` expr $num % 10 `
	echo $dg
	num=` expr $num / 10 `
	echo $num
	sum=` expr $sum + $dg `
	echo $sum
done

echo "The sum of digits is $sum"
