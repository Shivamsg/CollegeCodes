#include<stdio.h>

int main()
{
	int i=0;
	char str1[20]="\0",str2[20]="\0";
	
	printf("Enter a String:");
	gets(str1);
	
	char *name=str1;
	char *rev=str2;
	
	while(*name!='\0')
	{
		name++;
		i++;
	}
	
	name--;
	while(i>0)
	{
		*rev=*name;
		rev++;
		name--;
		i--;
	}
	
	printf("\nReverse of String: %s \n",str2);
	
	return 0;
}
