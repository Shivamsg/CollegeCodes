#include<stdio.h>
#include<string.h>

struct student
{
	int roll_no;
	char name[50];
	float fees;
	char dob[50];
};

int main()
{
	struct student std1,std2,*p1,*p2;
	p1=&std1;
	p2=&std2;
	
	p1->roll_no=1;
	strcpy(p1->name,"abcd");
	p1->fees=23000;
	strcpy(p1->dob,"12-11-1999");
	
	printf("\nEnter Student 2 Details:- \n");
	printf("Enter roll no: ");
	scanf("%d",&p2->roll_no);
	printf("Enter name: ");
	scanf(" %s",p2->name);
	printf("Enter fees: ");
	scanf("%f",&p2->fees);
	printf("Enter date of birth: ");
	scanf(" %s",p2->dob);
	
	
	printf("\nStudent 1 Details:- \n");
	printf("Roll no: %d \n",p1->roll_no);
	printf("Name: %s \n",p1->name);
	printf("Fees: %f \n",p1->fees);
	printf("Date of birth: %s \n",p1->dob);
	
	printf("\nStudent 2 Details:- \n");
	printf("Roll no: %d \n",p2->roll_no);
	printf("Name: %s \n",p2->name);
	printf("Fees: %f \n",p2->fees);
	printf("Date of birth: %s \n",p2->dob);
	
	return 0;
}
