#include<stdio.h>

struct dob
{
	int day;
	int month;
	int year;
};

struct student
{
	int roll_no;
	char name[100];
	float fees;
	struct dob date;
};

int main()
{
	struct student std;
	
	printf("Enter roll no: ");
	scanf("%d",&std.roll_no);
	printf("Enter name: ");
	scanf("%s",std.name);
	printf("Enter fees: ");
	scanf("%f",&std.fees);
	printf("Enter date of birth: ");
	scanf("%d %d %d",&std.date.day,&std.date.month,&std.date.year);
	
	printf("\nStudent Details:- \n");
	printf("Roll no: %d \n",std.roll_no);
	printf("Name: %s \n",std.name);
	printf("Fees: %f \n",std.fees);
	printf("Date of birth: %d-%d-%d \n",std.date.day,std.date.month,std.date.year);
	
	return 0;
}
