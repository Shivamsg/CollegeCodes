#include<stdio.h>

int minimum(int arr[])
{
	int i,j,key,n;
	for(i=1;i<8;i++)
	{
		key=arr[i];
		j=i-1;
		
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}

	printf("Which minimum value do you want:");
    scanf(" %d",&n);

	printf("%d\n",*(arr+n-1));
}

void main()
{
    int i;
    int arr[8];

	printf("\nEnter an array:");
	for(i=0;i<8;i++)
	{
		scanf(" %d",arr+i);
	}

	minimum(arr);
}