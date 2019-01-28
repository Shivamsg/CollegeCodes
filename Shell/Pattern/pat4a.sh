#!/bin/bash/

echo -n Enter number of rows:
read n

n=$(($n-1))
num=$(($n\*2))
i=$num

while [ $i -ge 1 ]
do
	j=1
	while [ $j -le $i ]
	do
		echo -n " *"
		j=$(($j+1))
	done
	echo
	
	k=$(($num-$i))
	while [ $k -ge 0 ]
	do
		echo -n "  "
		k=$(($k-2))
	done
	i=$(($i-2))
done

echo "*"
