#include<stdio.h>

main()
{	int i,j,k,l,m;

	for(int i=1;i<=5;i++)
	{
		for(j=5-i;j>=0;j--)
			printf(" ");

		for(k=i;k<=2*i-1;k++)
			printf("%d",k);

		for(l=k-2;l>=i;l--)
			printf("%d",l);
			
	printf("\n");
	}
}
