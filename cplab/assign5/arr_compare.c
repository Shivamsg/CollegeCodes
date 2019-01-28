#include<stdio.h>

main()
{
	int arr[100],i,n,x;

	printf("Enter Number of array elements:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter Number %d: ",i+1);
		scanf("%d",&arr[i]);
	}


	printf("Enter 1 for largest number in the array, 2 for smallest and 3 for both:");
	scanf("%d",&x);

	switch(x)
	{
	case 1: for(i=0;i<n;i++)
		{
			if(arr[0]<arr[i])
				arr[0]=arr[i];
		}
		printf("\nLargest of array elements: %d\n",arr[0]);
		break;

	case 2: for(i=0;i<n;i++)
		{
			if(arr[0]>arr[i])
				arr[0]=arr[i];
		}
		printf("\nSmallest of array elements: %d\n",arr[0]);
		break;

	case 3: arr[n]=arr[0]; 
		for(i=0;i<n;i++)
		{
			if(arr[0]<arr[i])
				arr[0]=arr[i];
			if(arr[n]>arr[i])
				arr[n]=arr[i];
		}
		printf("\nLargest of array elements: %d\n",arr[0]);
		printf("\nSmallest of array elements: %d\n",arr[n]);
		break;
	}
	
}
