#include<stdio.h>

struct student
{
	int roll_no;
	char name[50];
	float fees;
	char dob[50];
};

int main()
{
	struct student std[30];
	int n,i,rollno,n_rollno;
	float n_fees;
	char n_dob[50], n_name[50];
	
	printf("Enter the number of students: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	printf("\nEnter Student %d Details:- \n",i+1);
	printf("Enter roll no: ");
	scanf("%d",&std[i].roll_no);
	printf("Enter name: ");
	scanf(" %s",std[i].name);
	printf("Enter fees: ");
	scanf("%f",&std[i].fees);
	printf("Enter date of birth: ");
	scanf(" %s",std[i].dob);
	}
	
	for(i=0;i<n;i++)
	{
	printf("\nStudent %d Details:- \n",i+1);
	printf("Roll no: %d \n",std[i].roll_no);
	printf("Name: %s \n",std[i].name);
	printf("Fees: %f \n",std[i].fees);
	printf("Date of birth: %s \n",std[i].dob);
	}
	
	printf("\nEnter the roll no of student to be edited: ");
	scanf("%d",&rollno);
	printf("Enter new roll no: ");
	scanf("%d",&std[rollno-1].roll_no);
	printf("Enter new name: ");
	scanf(" %s",std[rollno-1].name);
	printf("Enter new fees: ");
	scanf("%f",&std[rollno-1].fees);
	printf("Enter new date of birth: ");
	scanf(" %s",std[rollno-1].dob);
	
	for(i=0;i<n;i++)
	{
	printf("\nStudent %d Details:- \n",i+1);
	printf("Roll no: %d \n",std[i].roll_no);
	printf("Name: %s \n",std[i].name);
	printf("Fees: %f \n",std[i].fees);
	printf("Date of birth: %s \n",std[i].dob);
	}
	
	return 0;
}
