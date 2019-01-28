#include<stdio.h>
#include<stdlib.h>

struct list
{
    struct list *prev;
    int a;
    struct list *next; 
};

typedef struct list * node;
node head;

node createNode()
{
    node temp;
    temp=(node)malloc(sizeof(struct list));
    temp->prev=NULL;
    temp->next=NULL;
    
    return temp;
}

void createList()
{
    node temp, p;
    p=head;
    int i,a,n;
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
            temp->prev=p;
            p->next=temp;
            p=temp;
        }
    }
}

void listCheck()
{
    char opt;

    if(head->next==NULL)
        createList();
    
    else
    {
        printf("A list already exists!!\n");
        printf("Do you want to overwrite existing list(y/n):");
        scanf(" %c",&opt);

        if(opt=='y')
            createList();
    }
}

void printList()
{
    node p=createNode();
    p=head;
    
    printf("\nThe Linked list:\n");
    while(p!=NULL)
    {
        printf("%d\t",p->a);
        p=p->next;
    }

    printf("\n");
}



void main()
{
    int ch;
    char opt;
    printf("Doubly linked list:\n\n");
    head=createNode();

    do
    {
        printf("\nWhat do you want to do?\n");
        printf("1.Create a list \n2.Insert into the list \n3.Delete from list \n");
        printf("Option:");
        scanf(" %d",&ch);

        switch(ch)
        {
            case 1:
                listCheck();
                printList();
            break;
            case 2:

            break;
            case 3:

            break;
            
        }

        printf("\nDo you want to perform another operation(y/n):");
        scanf(" %c",&opt);

    }while(opt=='y');
}