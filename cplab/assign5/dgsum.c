#include<stdio.h>

int dgsum(int a)
{
	if(a==0)
		return 0;
	else
		return a%10+dgsum(a/10);
}

main()
{
	int n,s;
	printf("Enter Number:");
	scanf("%d",&n);

	s=dgsum(n);
	printf("\nSum of digits of entered number:%d\n",s);
}
