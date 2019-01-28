#include<stdio.h>
void concat(char *,char *);

int main()
{
	char str1[20]="\0",str2[20]="\0";
	
	printf("Enter String 1:");
	gets(str1);
	printf("Enter String 2:");
	gets(str2);
	
	concat(str1,str2);
	
	return 0;
}

void concat(char *s1,char *s2)
{
	char *con=s1;
	
	while(*s1!='\0')
		s1++;
		
	*s1=' ';
	++s1;
	
	while(*s2!='\0')
	{
		*s1=*s2;
		s1++,s2++;
	}	
	
	*s1='\0';
	printf("Concatenated String:");
	puts(con);
}
