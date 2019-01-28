#!bin/bash/

echo -n Enter number of rows:
read n

i=$n

while [ $i -ge 1 ]
do
	j=1
	while [ $j -le $i ]
	do
		echo -n "*"
		j=$(($j+1))
	done
	echo
	i=$(($i-1))
done
	
