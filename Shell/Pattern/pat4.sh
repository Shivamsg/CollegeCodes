#!bin/bash/

echo -n Enter number of rows:
read n

num=$(($(($n\*2))-1))
i=$num

while [ $i -ge 1 ]
do
	j=1
	k=$(($num-$i))
	while [ $k -gt 0 ]
	do
		echo -n " "
		k=$(($k-2))
	done
	
	
	while [ $j -le $i ]
	do
		echo -n "*"
		j=$(($j+1))
	done
	echo
	i=$(($i-2))
done
	
