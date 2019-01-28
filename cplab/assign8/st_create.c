#include<stdio.h>

struct person
{
	char name [50];
	int emp_no;
	float salary;
};

int main()
{
	struct person person1 = { "XYZ" , 13245 , 23000.00 };
	
	printf("\nPerson1 details:\nName:%s \nEmp_no:%d \nSalary:%f \n",person1.name,person1.emp_no,person1.salary);
	return 0; 
}
