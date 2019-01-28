#include<stdio.h>
#include<stdlib.h>

int hashTable[10]={0};
int input[10];

int j=0;

int hashIndex(int a)
{
    return a%10;
}

void createInput(int a)
{
    input[j]=a;
    j++;
}

void createTable(int a)
{
    int ind=hashIndex(a);

    while(hashTable[ind]!=0)
    {
        ind++;
        ind%=10;
    }
    hashTable[ind]=a;
    
}

void display()
{
    int i;

    printf("\nCurrent Hash Table:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",hashTable[i]);
    }
    printf("\n");
}

void Insert(int value)
{
    createInput(value);
    createTable(value);
}

void Search(int a)
{
    int ind=hashIndex(a);
    int chk=ind;

    do
    {
        if(hashTable[ind]==a)
        {
            printf("\nThe value is present in the given data\n");
            return;
        }
        ind++;
        ind%=10;
    }while(hashTable[ind]!=0&&ind!=chk);

    printf("\nThe value is not present in the given data\n");
}

void Delete(int a)
{
    int ind=hashIndex(a);
    int chk=ind;

    do
    {
        if(hashTable[ind]==a)
        {
            hashTable[ind]=0;
            return;
        }
        ind++;
        ind%=10;
    }while(hashTable[ind]!=0&&ind!=chk);

    printf("\nThe value is not present in the given data\n");
}


void main()
{
    int ch,data;
    char opt;
    printf("Hashing Function:\n\n");

    do
    {
        printf("\nWhat do you want to do?\n");
        printf("1.Enter data \n2.Search provided data \n3.Delete some data \n4.Display Hash Table\n");
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
                printf("\nWhat value do you want to search:");
                scanf("%d",&data);
                display();
                Search(data);
            break;
            case 3:
                printf("\nWhat value do you want to delete:");
                scanf("%d",&data);
                Delete(data);
                display();
            break;
            case 4:
                display();
            break;
        }

        printf("\nDo you want to perform another operation(y/n):");
        scanf(" %c",&opt);

    }while(opt=='y');

}