#include<stdio.h>

void main()
{
	int n,i;
	printf("\nEnter N:");
	scanf("%d",&n);
	
	printf("Odd\t Even\n");
	
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
			printf("%d\t",i);
		else
			printf("%d\n",i);
	}
	printf("\n");
}
