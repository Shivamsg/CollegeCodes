#include<stdio.h>


main()
{
	int i,n,arr[10];

	for(i=0;i<10;i++)
	{
		printf("Enter Number %d: ",i+1);
		scanf("%d",&arr[i]);
	}

	printf("\nEnter a number you want to replace:");
	scanf("%d",&n);

	for(i=0;i<10;i++)
	{
		if(n==arr[i])
		arr[i]=n%2;
	}

	printf("\nArray:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
