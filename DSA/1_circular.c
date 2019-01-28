#include<stdio.h>
#include<stdlib.h>

struct link
{
    int a;
    struct link *next;
};

typedef struct link * node;
node head;

node createNode()
{
    node temp;
    temp=(node)malloc(sizeof(struct link));
    temp->next=head;

    return temp;
}

void createList(int n)
{
    int i;
    node temp,p;

    p=createNode();
    p=head;

    for(i=1;i<=n;i++)
    {
        temp=createNode();
        temp->a=i;

        if(i==1)
        {
            head->a=temp->a;
        }
        else
        {
            p->next=temp;
            p=temp;
        }
    }
}

void printList()
{
    node p=createNode();
    p=head;
    
    printf("\nThe Linked list:\n");
    
    do
    {
        printf("%d\t",p->a);
        p=p->next;
    }while(p!=head);
}

void startInsert(int value)
{
    node temp=createNode();
    node p=createNode();
    p=head;

    do
    {
        p=p->next;
    }while(p->next!=head);

    temp->a=value;
    temp->next=head;
    head=temp;
    p->next=head;
}

void endInsert(int value)
{
    node temp=createNode(),p=createNode();
    p=head;

    temp->a=value;
    do
    {
        p=p->next;
    }while(p->next!=head);

    p->next=temp;    
}

void userInsert(int value)
{
    int pos,i;
    node temp=createNode(),p=createNode();
    p=head;
    temp->a=value;

    printf("\nAt what position do you want to insert the node:");
    scanf(" %d",&pos);

    if(pos==1)
    {
        startInsert(value);
        return;
    }

    for(i=1;i<pos-1;i++)
    {
        p=p->next;
        if(p==head)
        {
            printf("\nERROR:Do not exceed size of the linked list\n");
            userInsert(value);
            return;
        }
    }

    temp->next=p->next;
    p->next=temp;
}

void startDelete()
{
    node temp=createNode();
    node p=createNode();
    p=head;

    do
    {
        p=p->next;
    }while(p->next!=head);

    temp=head;
    head=temp->next;
    p->next=head;

    free(temp);
}

void endDelete()
{
    node temp=createNode(),p=createNode();
    p=head;

    do
    {
        temp=p;
        p=p->next;
    }while(p->next!=head);

    temp->next=head;
    free(p);
}

void userDelete()
{
    int pos,i;
    node temp=createNode(),p=createNode();
    p=head;

    printf("\nAt what position do you want to delete the node:");
    scanf(" %d",&pos);

    if(pos==1)
    {
        startDelete();
        return;
    }

    for(i=1;i<pos-1;i++)
    {
        p=p->next;
        if(p==head)
        {
            printf("\nERROR:Do not exceed size of the linked list\n");
            userDelete();
            return;
        }
    }

    temp=p->next;
    p->next=temp->next;
    free(temp);
}

void main()
{
    int n,opt,value;
    head=createNode();

    printf("How many nodes do you want to create:");
    scanf(" %d",&n);

    createList(n);
    printList();

    printf("\n\n        Insertion of node \nWhere do you want to insert a node?\n");
    printf("1.At the beginning \n2.At the end \n3.Choose location \nOption:");
    scanf(" %d",&opt);

    printf("\nWhat value do you want to insert:");
    scanf(" %d",&value);

    switch(opt)
    {
        case 1:
        startInsert(value);
        break;
        case 2:
        endInsert(value);
        break;
        case 3:
        userInsert(value);
        break;
    }
    printList();

    printf("\n\n        Deletion of node \nWhere do you want to delete a node?\n");
    printf("1.At the beginning \n2.At the end \n3.Choose location \nOption:");
    scanf(" %d",&opt);

    switch(opt)
    {
        case 1:
        startDelete();
        break;
        case 2:
        endDelete();
        break;
        case 3:
        userDelete();
        break;
    }
    printList();

}