#!/bin/bash

echo -n Enter a Number:
read n

num=$n
dg=0
rev=0

while [ $num -ne 0 ]
do
	dg=` expr $num % 10 `
	
	num=` expr $num / 10 `
	
	rev=` expr $rev \* 10 `
	rev=` expr $rev + $dg `
	
done

if [ $rev -eq $n ]
then
	echo "Number is palindrome"
else
	echo "Number is not palindrome"
fi
