#include<stdio.h>

void main()
{
	int arr[100],i,m,n,x;
	
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
	
	printf("\n Position of element you want to edit:");
	scanf("%d",&x);
	
	printf("\n Desired new element:");
	scanf("%d",&m);
	
	arr[x-1]=m;
	
	printf("\nUpdated array elements:\n");
    
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

}
