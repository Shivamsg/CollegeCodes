#include<stdio.h>
#include<stdlib.h>

struct link
{
    int a;
    struct link *next;
};

typedef struct link * node;

node createNode()
{
    node temp;
    temp=(node)malloc(sizeof(struct link));
    temp->next=NULL;

    return temp;
}

void createList(node head,int n)
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

void printList(node head)
{
    node p=createNode();
    p=head;
    
    printf("\nThe Linked list:\n");
    while(p!=NULL)
    {
        printf("%d\t",p->a);
        p=p->next;
    }
}

void startInsert(node *headr,int value)
{
    node temp=createNode();

    temp->a=value;
    temp->next=(*headr);
    *headr=temp;
}

void endInsert(node *headr,int value)
{
    node temp=createNode(),p=createNode();
    p=*headr;

    temp->a=value;
    while(p->next!=NULL)
    {
        p=p->next;
    }

    p->next=temp;    
}

void userInsert(node *headr,int value)
{
    int pos,i;
    node temp=createNode(),p=createNode();
    p=*headr;
    temp->a=value;

    printf("\nAt what position do you want to insert the node:");
    scanf(" %d",&pos);

    if(pos==1)
    {
        startInsert(&(*headr),value);
        return;
    }

    for(i=1;i<pos-1;i++)
    {
        p=p->next;
        if(p==NULL)
        {
            printf("\nERROR:Do not exceed size of the linked list\n");
            userInsert(&(*headr),value);
            return;
        }
    }

    temp->next=p->next;
    p->next=temp;
}

void startDelete(node *headr)
{
    node temp=createNode();

    temp=(*headr);
    *headr=temp->next;

    free(temp);
}

void endDelete(node *headr)
{
    node temp=createNode(),p=createNode();
    p=*headr;

    while(p->next!=NULL)
    {
        temp=p;
        p=p->next;
    }

    temp->next=NULL;
    free(p);
}

void userDelete(node *headr)
{
    int pos,i;
    node temp=createNode(),p=createNode();
    p=*headr;

    printf("\nAt what position do you want to delete the node:");
    scanf(" %d",&pos);

    if(pos==1)
    {
        startDelete(&(*headr));
        return;
    }

    for(i=1;i<pos-1;i++)
    {
        p=p->next;
        if(p==NULL)
        {
            printf("\nERROR:Do not exceed size of the linked list\n");
            userDelete(&(*headr));
            return;
        }
    }

    temp=p->next;
    p->next=temp->next;
    free(temp);
}

void Search(node *headr,int value)
{
    int i=1;
    node p=createNode();
    p=*headr;

    while(p!=NULL)
    {
        if(p->a==value)
        {
            printf("\nThe value is present in the linked list at position %d\n",i);
            return;
        }
        p=p->next;
        i++;
    }
    printf("\nThe value is not present in the linked list\n");
}

void main()
{
    int n,opt,value;
    node head=createNode();

    printf("How many nodes do you want to create:");
    scanf(" %d",&n);

    createList(head,n);
    printList(head);

    printf("\n\n        Insertion of node \nWhere do you want to insert a node?\n");
    printf("1.At the beginning \n2.At the end \n3.Choose location \nOption:");
    scanf(" %d",&opt);

    printf("\nWhat value do you want to insert:");
    scanf(" %d",&value);

    switch(opt)
    {
        case 1:
        startInsert(&head,value);
        break;
        case 2:
        endInsert(&head,value);
        break;
        case 3:
        userInsert(&head,value);
        break;
    }
    printList(head);

    printf("\n\n        Deletion of node \nWhere do you want to delete a node?\n");
    printf("1.At the beginning \n2.At the end \n3.Choose location \nOption:");
    scanf(" %d",&opt);

    switch(opt)
    {
        case 1:
        startDelete(&head);
        break;
        case 2:
        endDelete(&head);
        break;
        case 3:
        userDelete(&head);
        break;
    }
    printList(head);

    printf("\n\n        Search of node \nWhich value do you want to search:");
    scanf(" %d",&value);
    Search(&head,value);

    printf("\nFinal List");
    printList(head);

}