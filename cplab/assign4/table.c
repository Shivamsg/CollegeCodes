#include<stdio.h>

main()
{
	printf("\nTable from 1 to 10:-\n");
	
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=10;j++)
			printf("%d\t",j*i);
	printf("\n");
	}
}
