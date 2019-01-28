#include<stdio.h>

struct dist
{
	int feet;
	float inch;
}
main()
{
	struct dist d1,d2,sum;
	
	printf("\nEnter First Distance:\n");
	
	printf("Feet:");
	scanf("%d",&d1.feet);
	printf("Inches:");
	scanf("%f",&d1.inch);
	
	
	printf("\nEnter Second Distance:\n");
	
	printf("Feet:");
	scanf("%d",&d2.feet);
	printf("Inches:");
	scanf("%f",&d2.inch);
	
	
	sum.feet=d1.feet + d2.feet;
	sum.inch=d1.inch + d2.inch;
	
	if(sum.inch>=12)
	{
		sum.inch-=12;
		sum.feet++;
	}
	
	printf("\nSum of Distances:%d'%.2f\n",sum.feet,sum.inch);
	
	
}
