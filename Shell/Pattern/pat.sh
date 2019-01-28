#!bin/bash/

echo -n Enter number of rows:
read n

i=1

while [ $i -le $n ]
do
	j=1
	while [ $j -le $n ]
	do
		echo -n "*"
		j=$(($j+1))
	done
	echo
	i=$(($i+1))
done
	
