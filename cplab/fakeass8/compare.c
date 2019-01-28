#include<stdio.h>

int main()
{
	char str1[20]="\0",str2[20]="\0";
	
	printf("Enter String 1:");
	gets(str1);
	printf("Enter String 2:");
	gets(str2);
	
	char *name=str1;
	char *cmp=str2;
	
	while(((*name!='\0')||(*cmp!='\0'))&&(*name==*cmp))
	{
		name++;
		cmp++;
	}
	
	if(*name==*cmp)
		printf("\nThe Strings are Same\n");
	else
		printf("\nThe Strings are Different\n");
}
