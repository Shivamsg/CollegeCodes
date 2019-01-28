#include<stdio.h>

int main()
{
	char st1[20]="string1",st2[20]="string2";
	char *str1=st1,*str2=st2;
	char *p=str1;
	
	while(*str1!='\0')
		str1++;
	
	*str1=' ';
	str1++;
	
	while(*str2!='\0')
	{
		*str1=*str2;
		str2++;
		str1++;
	}
	
	*str1='\0';
	   
	printf("%s\n",p);
	
	return 0;
}
