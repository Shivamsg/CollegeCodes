#include<stdio.h>
#include<stdlib>

struct student
{
    char *id;
    char *name;
    struct student *p;
};

typedef struct student *node;

node createNode()
{
    
}

void main()
{
    node head;

    head=(node)malloc(sizeof(struct student));

}