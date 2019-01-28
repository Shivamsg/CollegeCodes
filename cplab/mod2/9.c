#include<stdio.h>

void main()
{
	int arr[100],i,n,x;
	
	printf("Enter Number of array elements:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter Number %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("\nEntered array:\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	
	printf("\n Position of element you want to delete:");
	scanf("%d",&x);
	
	for(i=x-1;i<n;i++)
	{
		arr[i]=arr[i+1];
	}
	
	printf("\nUpdated array elements:\n");
    
    for(i=0;i<n-1;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

}
