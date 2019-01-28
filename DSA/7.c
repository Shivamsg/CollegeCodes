#include<stdio.h>

void main()
{
	int i, key, j;
	int arr[9],res[9];
	
	printf("\nEnter an array:");
	
	for(i=0;i<8;i++)
	{
		scanf(" %d",&arr[i]);
	}

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
	
	j=0;
	for(i=0;i<8;i++)
	{
		res[j++]=arr[i];
		res[j++]=arr[7-i];
		
		if(i==3)
			break;
	}

	for(i=0;i<8;i++)
	{
		printf("\t%d",res[i]);
	}
}
