#include<stdio.h>

struct person
{
	char name [50];
	int emp_no;
	float salary;
};

int main()
{
	struct person person1 = { "XYZ" , 13245 , 23000.00 },*p;
	p=&person1;
	
	struct person person2 = { "abcd" , 34567 , 50000.00 };
	
	printf("\nPerson1 details:\nName:%s \nEmp_no:%d \nSalary:%f \n",person1.name,(*p).emp_no,p->salary);
	return 0;
}
