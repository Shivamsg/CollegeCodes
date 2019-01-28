#include<stdio.h>

void table(int a)
{
	int i;
	printf("\nTable of %d:-\n",a);
	
	for(int i=1;i<=10;i++)
		printf("%dx%02d=%d\n",a,i,a*i);
	
}

main()
{
	int n;
	printf("Enter Number:");
	scanf("%d",&n);

	table(n	);	
}
