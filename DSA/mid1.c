#include<stdio.h>

struct student
{
    int id;
    char* name;
    char* grade;
};

struct student table[10];
int i=0,n=9;

void createData()
{
    int i;

    for(i=0;i<10;i++)
    {
        printf("\nId %d:",i+1);
        scanf(" %d",&table[i].id);
    /*    printf("Name:\n");
        scanf(" %s",table[i].name);
        printf("Grade:\n");
        scanf(" %s",table[i].grade);
    */

//    table[i].id=i+1;
    table[i].name="name";
    table[i].grade="AB";

    }
}

void Display()
{
    int i;
    
    for(i=0;i<10;i++)
    {
        printf("\n %d\n",table[i].id);
        printf(" %s\n",table[i].name);
        printf(" %s\n",table[i].grade);
        
    }
}

void Search(int id)
{
    int s=i;
    i=(n+i)/2;

    if(id==table[i].id)
    {
        printf("\nId found. Details are as follows:");
        printf("\n %d\n",table[i].id);
        printf(" %s\n",table[i].name);
        printf(" %s\n",table[i].grade);
        return;
    }
    else if(id<table[i].id)
    {
        n=i;
        i=s;
        Search(id);
        return;
    }
    else if(id>table[i].id)
    {
        Search(id);
        return;
    }
    else if(n<=i)
    {
        printf("\nNot found!!");
        return;
    }
}

void main()
{
//    table[0].id=1;
//    printf(" %d\n",table[0].id);

    createData();
    Display();

        int id;
    printf("Which id do you want to search:\n");
    scanf(" %d",&id);

    Search(id);
    return;
}