#include<stdio.h>

struct employee
{
	int emp_id;
	char name[20];
	float salary;
	char designation[20];
	float experience;
};

int main()
{
	struct employee emp;
	printf("\n%d \n",sizeof(emp));
	return 0;
}
