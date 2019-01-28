#include<stdio.h>

int key=0;
int arr[10]={9,1,7,4,6,3,5,8,0,2};

int Search(int i,int n)
{
    int s=i;
    i=(n+i)/2;

    if(key>arr[i] && key<=arr[i+1])
    {
        return i+1;
    }
    else if(key<arr[i])
    {
        n=i;
        i=s;
        if(n==0)
            return 0;
        return Search(i,n);
        
    }
    else if(key>=arr[i])
    {
        return Search(i,n);
    }
        
}

void sort()
{
    int i,j,k;

	for(i=1;i<10;i++)
	{
		key=arr[i];

        k=Search(0,i-1);

        for(j=i-1;j>=k;j--)
        {
            arr[j+1]=arr[j];
        }

		arr[j+1]=key;
	}

}

void display()
{
    int i;

    for(i=0;i<10;i++)
    {
        printf("%d \t",arr[i]);
    }
    printf("\n");
}

void main()
{
    int i,j,key,n;
    
    printf("\nArray before Sorting:\n");
    display();

    sort();

    printf("\nArray after Sorting:\n");
    display();
}