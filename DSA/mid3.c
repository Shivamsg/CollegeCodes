#include<stdio.h>
#include<stdlib.h>

struct link
{
    int a;
    struct link *next;
};
int arr[50];
typedef struct link * node;
node head=NULL,head2=NULL;
int n;

node createNode()
{
    node temp;
    temp=(node)malloc(sizeof(struct link));
    temp->next=NULL;

    return temp;
}

void createList()
{
    node temp, p;
    p=head;
    int i,a;
    printf("How many nodes do you want to create:");
    scanf(" %d",&n);

    for(i=1;i<=n;i++)
    {
        temp=createNode();

        printf("Value %d:",i);
        scanf(" %d",&a);
        temp->a=a;

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

void ListtoArray()
{
    int i=0;
    node p=head;

    while(p!=NULL)
    {
        arr[i]=p->a;
        p=p->next;
        i++;
    }
}

void Reverse()
{
    int i;
    node temp,p;
    p=head2;

    for(i=n-1;i>=0;i--)
    {
        temp=createNode();
        temp->a=arr[i];

        if(i==n-1)
        {
            head2->a=temp->a;
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
    node p=head2;

    printf("\nReversed Linked list:\n");
    while(p!=NULL)
    {
        printf("%d\t",p->a);
        p=p->next;
    }

    printf("\n");

}

void main()
{
    head=createNode();
    head2=createNode();
    createList();
    ListtoArray();
    Reverse();
    printList();

    return;
}