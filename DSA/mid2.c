#include<stdio.h>
#include<stdlib.h>

struct link
{
    int a;
    struct link *next;
};

int arr[50];
typedef struct link * node;
node head=NULL;
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

void sum()
{
    int sum=0;
    node p=head;

    while(p!=NULL)
    {
        sum=sum+p->a;
        if(sum==0)
        {
        head=p->next;
        p->next=NULL;
        return;
        }
        p=p->next;
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

void Sort()
{
    int i,j,key;

    for(i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}

void printList()
{
    node p=head;

    printf("\nThe Linked list:\n");
    while(p!=NULL)
    {
        printf("%d\t",p->a);
        p=p->next;
    }

    printf("\n");

}

void printArr()
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}

void main()
{
    head=createNode();
    createList();
    printList();
    sum();
    printList();


    ListtoArray();
    Sort();
    printArr();
    
    
    return;
}