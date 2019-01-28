#!bin/bash/

echo -n Enter number of rows:
read n

i=$n

while [ $i -ge 1 ]
do
	j=1
	k=$(($n-$i))
	while [ $k -gt 0 ]
	do
		echo -n " "
		k=$(($k-1))
	done
	
	while [ $j -le $i ]
	do
		echo -n "*"
		j=$(($j+1))
	done
	echo
	i=$(($i-1))
done
	
