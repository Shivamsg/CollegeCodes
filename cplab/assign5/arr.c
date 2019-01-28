#include<stdio.h>

main()
{
	int arr[6],i,n;

	for(i=0;i<6;i++)
	{
		printf("Enter Number %d: ",i+1);
		scanf("%d",&arr[i]);
	}

	printf("\nEnter a number:");
	scanf("%d",&n);

	for(i=0;i<6;i++)
	{
		if(n==arr[i])
		{	printf("\nEntered number exists in the array\n");
			break;
		}
		else if(i==5)
			printf("\nEntered number does not exist in the array\n");
	}

}
