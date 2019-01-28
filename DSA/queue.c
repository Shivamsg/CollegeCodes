#include<stdio.h>

int Q[20];
int rear=-1,front=-1;

void Insert(int a)
{
    rear=(rear+1)%20;
    Q[rear]=a;
}

void Remove()
{
    int d=Q[front];
    front=(front+1)%20;
}

void display()
{
    int i;

    printf("\nQueue:\n");
    for(i=front;i<rear;i++)
    {
        printf("%d\t",Q[i+1]);
    }
    printf("\n");
}

void main()
{
    int ch,data;
    char opt;

    printf("\t\t Simple Queue using array\n");
    //Hum use kar rahe hai array ko, samajh aaya


     do
    {
        printf("\nWhat do you want to do?\n");
        printf("1.Insert into Queue \n2.Delete from Queue \n3.Display Queue\n");
        printf("Option:");
        scanf(" %d",&ch);

        switch(ch)
        {
            case 1:
                printf("\nEnter data:");
                scanf("%d",&data);
                Insert(data);
            break;
            case 2:
                Remove();
                
            break;
            case 4:
                
            break;
        }
        display();

        printf("\nDo you want to perform another operation(y/n):");
        scanf(" %c",&opt);

    }while(opt=='y');

    
    return;
}