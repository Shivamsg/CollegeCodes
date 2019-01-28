#include<stdio.h>

main()
{
	int arr[100],i,n,sum=0,prod=1;
	float avg;

	printf("Enter Number of array elements:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter Number %d: ",i+1);
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
		prod=prod*arr[i];
	}
	
	avg=(float)sum/n;

	printf("\nSum of array elements: %d\n",sum);
	printf("\nAverage of array elements: %.2f\n",avg);
	printf("\nProduct of array elements: %d\n",prod);
}
