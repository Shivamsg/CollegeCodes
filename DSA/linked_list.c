#include<stdio.h>
#include<stdlib.h>

struct student
{
    char *id;
    char *name;
    struct student *p;
};

void main()
{
    struct student *first,*second,*third,*n;

    first=(struct student *)malloc(sizeof(struct student));
    second=(struct student *)malloc(sizeof(struct student));
    third=(struct student *)malloc(sizeof(struct student));

    first->id="2017KUCP1001";
    first->name="naam1";
    
    second->id="2017KUCP1002";
    second->name="naam2";
    
    third->id="2017KUCP1003";
    third->name="naam3";

    first->p=second;
    second->p=third;
    third->p=NULL;

    n=first;
    while(n!=NULL)
    {
        printf("%s %s \n",n->id,n->name);
        n=n->p;
    }
    
}