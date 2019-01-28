#include<stdio.h>
#include<stdlib.h>

struct doubly
{
    struct doubly *prev;
    int a;
    struct doubly *next;
};

typedef struct doubly * node;
node head=NULL;

node createNode()
{
    node temp;
    temp=(node)malloc(sizeof(struct doubly));
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
    node p=head;

    printf("\nThe Doubly Linked list:\n");
    while(p!=NULL)
    {
        printf("%d\t",p->a);
        p=p->next;
    }

    printf("\n");

}

void startInsert(int a)
{
    node temp=createNode();
    temp->a=a;

    head->prev=temp;
    temp->next=head;
    head=temp;
}

void endInsert(int a)
{
    node temp=createNode(),p=head;
    temp->a=a;

    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=temp;
    temp->prev=p;
}

void userInsert(int a)
{
    int i,pos;
    node temp=createNode(),p=head,f=createNode();
    temp->a=a;

    printf("\nAt what position do you want to insert the node:");
    scanf(" %d",&pos);

    if(pos==1)
    {
        startInsert(a);
        return;
    }

    for(i=1;i<pos-1;i++)
    {
        p=p->next;
        if(p==NULL)
        {
            printf("ERROR! You have exceeded the size of the list! Try Again\n");
            userInsert(a);
            return;
        }
    }

    if(p->next==NULL)
    {
        endInsert(a);
        return;
    }

    f=p->next;
    temp->next=f;
    temp->prev=p;
    p->next=temp;
    f->prev=temp;
}

void Insertion()
{
    int a,opt;

    printf("\nWhat value do you want to insert:");
    scanf(" %d",&a);

    printf("\nWhere do you want to insert a node?\n");
    printf("1.At the start \n2.At the end \n3.Specify position \nYou choice:");
    scanf(" %d",&opt);

    switch(opt)
        {
            case 1:
            startInsert(a);
            break;
            case 2:
            endInsert(a);
            break;
            case 3:
            userInsert(a);
            break;
        }

}

void startDelete()
{
    node temp=createNode();

    temp=head;
    head=temp->next;
    head->prev=NULL;

    free(temp);
}

void endDelete()
{
    node temp=createNode(),p=head;

    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->prev->next=NULL;
    
    free(p);
}

void userDelete()
{
    int i,pos;
    node temp=createNode(),p=head,f=createNode();

    printf("\nAt what position do you want to insert the node:");
    scanf(" %d",&pos);

    if(pos==1)
    {
        startDelete();
        return;
    }

    for(i=1;i<pos;i++)
    {
        p=p->next;
        if(p==NULL)
        {
            printf("ERROR! You have exceeded the size of the list! Try Again\n");
            userDelete();
            return;
        }
    }

    if(p->next==NULL)
    {
        endDelete();
        return;
    }

    p->prev->next=p->next;
    p->next->prev=p->prev;

    free(p);
}

void Deletion()
{
    int opt;

    printf("\nWhere do you want to delete a node?\n");
    printf("1.At the start \n2.At the end \n3.Specify position \nYou choice:");
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

}

void Search()
{
    int i=1,value;
    node p=createNode();
    p=head;

    printf("\nWhich value do you want to search:");
    scanf(" %d",&value);

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
    char ans;
    int opt;
    head=createNode();

    do
    {
        printf("\n\t\tDoubly linked list\n");
        printf("What do you want to do?\n");
        printf("1.Create \n2.Insertion \n3.Deletion \n4.Search \n5.Display \nYour choice:");
        scanf(" %d",&opt);
        
        switch(opt)
        {
            case 1:
            listCheck();
            break;
            case 2:
            Insertion();
            break;
            case 3:
            Deletion();
            break;
            case 4:
            Search();
            break;
            case 5:
            break;
        }
        printList();

        printf("Do you want to perform another operation(y/n):");
        scanf(" %c",&ans);

    }while(ans!='n');
    
}