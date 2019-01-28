#include<stdio.h>

void main()
{
	int i,n;
	char temp;
	char arr[50];
	
	scanf("%s",arr);
	
	for(n=0;arr[n]!='\0';n++);
	n=n-1;
	
	for(i=0;i<=n/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[n-i];
		arr[n-i]=temp;
	}
	
	printf("%s\n",arr);
}
