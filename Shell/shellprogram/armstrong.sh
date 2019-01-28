#!/bin/bash/

echo -n Enter a Number:
read n

num=$n
dg=0
dg2=1
dg3=1
sum=0

while [ $num -ne 0 ]
do
	dg=` expr $num % 10 `
	
	num=` expr $num / 10 `
	
	dg2=` expr $dg \* $dg `
	
	dg3=` expr $dg2 \* $dg `
	
	sum=` expr $sum + $dg3 `
	
done

if [ $sum -eq $n ]
then
	echo "Number is armstrong"
else
	echo "Number is not armstrong"
fi
