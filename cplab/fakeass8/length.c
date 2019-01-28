#include<stdio.h>

int main()
{
	char str[20]="\0";
	
	printf("Enter a String:");
	gets(str);
	
	char *name=str;
	char *strt=name;
	
	while(*name!='\0')
	{
		name++;
	}
	
	int length=name-strt;
	
	printf("\nLength of String:%d \n",length);
	
}
