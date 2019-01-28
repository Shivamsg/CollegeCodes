#include<stdio.h>

struct dist
{
	int km;
	float m;
}D;

void sum(struct dist d1,struct dist d2)
{	
	int km;
	float m;
	
	km=d1.km + d2.km;
	m=d1.m + d2.m;
	
	if(m>=100)
	{
		m-=100;
		km++;
	}
	printf("\nSum of Distances:%dkm %.2fm\n",km,m);
}

void diff(struct dist d1,struct dist d2)
{	
	int km;
	float m;
	 
	if(d1.km>d2.km)
	{
		km=d1.km - d2.km;
		m=d1.m - d2.m;
	}
	else
	{
		km=d2.km - d1.km;
		m=d2.m - d1.m;
	}
	
	if(m<0)
	{
		m+=100;
		km--;
	}
	printf("\nDifference of Distances:%dkm %.2fm\n",km,m);
}


int main()
{
	struct dist d1,d2;
	int out;
	
	do
	{
		printf("\n1. Read the distances");
		printf("\n2. Display the distances");
		printf("\n3. Add the distances");
		printf("\n4. Subtract the distances");
		printf("\n5. Exit\n");
	
		printf("\nSelect an option:");
		scanf("%d",&out);
	
		switch(out)
		{
			case 1:
			printf("\nEnter First Distance:\n");
			printf("Kilometers:");
			scanf("%d",&d1.km);
			printf("meters:");
			scanf("%f",&d1.m);
	
			printf("\nEnter Second Distance:\n");
			printf("Kilometers:");
			scanf("%d",&d2.km);
			printf("meters:");
			scanf("%f",&d2.m);
			break;
			
			case 2:
			printf("\nDistance 1:%dkm %.2fm\n",d1.km,d1.m);
			printf("\nDistance 2:%dkm %.2fm\n",d2.km,d2.m);
			break;
			
			case 3:
			sum(d1,d2);
			break;
			
			case 4:
			diff(d1,d2);
			break;
		}
	}while(out!=5);
	
	return 0;
}


