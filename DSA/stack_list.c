#include<stdio.h>
#include<stdlib.h>

struct Stack
{
    int d;
    struct Stack *down;
};

typedef struct Stack * El;
El top=NULL;

El createElement()
{
    El temp;
    temp=(El)malloc(sizeof(struct Stack));
    temp->down=NULL;

    return temp;
}

void Push()
{
    El temp=createElement();

    printf("\nWhat value do you want to insert:");
    scanf(" %d",&temp->d);

    temp->down=top;
    top=temp;
}

void Pop()
{
    El temp=createElement();

    if(top==NULL)
    {
        printf("\nERROR! The stack is empty!!\n");
    }
    else
    {
        temp=top;
        top=temp->down;
        temp->down=NULL;
        free(temp);    
    }
}

void Display()
{
    El p=top;
    if(top==NULL)
    {
        printf("\nThe stack is empty!!\n");
    }
    else
    {
        printf("\nThe stack is:\n");
        while(p!=NULL)
        {
            printf(" %d \n",p->d);
            p=p->down;
        }
    }
}

void main()
{
    int opt;
    top=NULL;

    do
    {
        printf("\n        Stack using linked list\n");
        printf("1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");
        printf("Your option:");
        scanf(" %d",&opt);

        switch(opt)
        {
            case 1:
            Push();
            Display();
            break;
            case 2:
            Pop();
            Display();
            break;
            case 3:
            Display();
            break;
            
        }
    }while(opt!=4);

}