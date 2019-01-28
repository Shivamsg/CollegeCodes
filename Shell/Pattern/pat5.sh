#!bin/bash/

n=3
i=1
num=$(($(($n\*2))-1))


while [ $i -le $num ]
do
	
	if [ $i -le $n ]
	then
		k=$(($n-$i))
	else
		k=$(($i-$n))
	fi
	
	ke=$((3-$k))
	
	while [ $k -gt 0 ]
	do
		echo -n " "
		k=$(($k-1))
	done
	
	j=1
	end=$(($(($ke\*2))-1))
	while [ $j -le $end ]
	do
		if [ $j -eq 1 ]||[ $j -eq $end ]
		then
			echo -n "*"
		else
			echo -n "."
		fi
		
		j=$(($j+1))
	done
	echo
	i=$(($i+1))
done
	
