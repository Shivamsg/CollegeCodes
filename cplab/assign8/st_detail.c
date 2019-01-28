#include<stdio.h>

struct person
{
	char name [50];
	int emp_no;
	float salary;
};

void main()
{
	struct person person1;
	
	printf("Enter Person1 details(Name,Emp_no,Salary):\n");
	
	scanf("%s%d%f",person1.name,&person1.emp_no,&person1.salary);
	
	printf("\nPerson1 details:\nName:%s \nEmp_no:%d \nSalary:%f \n",person1.name,person1.emp_no,person1.salary);
	
}
