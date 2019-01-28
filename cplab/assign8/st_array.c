#include<stdio.h>

struct person
{
	char name [50];
	int emp_no;
	float salary;
};

int main()
{
	struct person a[2] = {{ "XYZ" , 13245 , 23000.00 } , { "abcd" , 34567 , 50000.00 }},*p;
	p=&a[0];
	
	printf("Person1 details:\nName:%s \nEmp_no:%d \nSalary:%f \n",a[0].name,(*p).emp_no,p->salary);
	
	printf("Person2 details:\nName:%s \nEmp_no:%d \nSalary:%f \n",a[1].name,(*(++p)).emp_no,(p+1)->salary);
	
	return 0;
}
