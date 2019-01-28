#include<stdio.h>

void main()
{
	int n,i,j;
	char temp,arr[50];
	
	printf("\nEnter an array:");
	scanf("%s",arr);
	
	for(i=0;i<50;i++)
		if(arr[i]=='\0')
			break;
	
	n=(i/2)-1;
	
	for(j=0;j<=(i/4)-1;j++)
	{
		temp=arr[j];
		arr[j]=arr[n];
		arr[n]=temp;
		n--;
	}
	
	n=i-1;
	for(j=i/2;j<3*i/4;j++)
	{
		temp=arr[j];
		arr[j]=arr[n];
		arr[n]=temp;
		n--;
	}
	
	for(j=0;j<i;j++)
		printf("%c",arr[j]);
	
}
