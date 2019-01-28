#include<stdio.h>
int main()
{
	char str1[11]="hello",str2[11]="world",res[22];
	int i=0,j=0;
	while(str1[i]!='\0')
	{
		res[i]=str1[i];
		i++;
		
	}

	while(str2[j]!='\0')
	{
		res[i]=str2[j];
		i++;
		j++;
	}
	
		res[i]='\0';
	puts(res);
return 0;
}
	
