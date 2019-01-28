#include<stdio.h>
#include<stdlib.h>

int count =-1;
int arr[10];

void Push()
{
    if(count==10)
    {
        printf("\nERROR! The stack is full!!\n");
    }
    else
    {
        printf("\nWhat value do you want to insert:");
        scanf(" %d",&arr[++count]);
    }
}

void Pop()
{
    if(count==-1)
    {
        printf("\nERROR! The stack is empty!!\n");
    }
    else
    {
        count--;
    }
}

void Display()
{
    int i;
    if(count==-1)
    {
        printf("\nThe stack is empty!!\n");
    }
    else
    {
        printf("\nThe stack is:\n");
        for(i=count;i>=0;i--)
        {
            printf(" %d \n",arr[i]);
        }
    }
}

void main()
{
    int opt;

    do
    {
        printf("\n        Stack using Array\n");
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