#include<stdio.h>

int main()
{
	char str1[20]="\0",str2[20]="\0";
	
	printf("Enter Destination:");
	gets(str1);
	printf("Enter Source:");
	gets(str2);
	
	char *name=str1;
	
	char *cp=str2;
	
	while(*cp!='\0')
	{
		*name=*cp;
		name++;
		cp++;
	}
	*name='\0';
	
	printf("\nNew Destination: %s \n",str1);
	
	return 0;
}
