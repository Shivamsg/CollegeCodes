#include<stdio.h>
#include<math.h>

void sort(float arr[28],int pos[28])
{
    int i,j,p;
    float key;

    for(i=1;i<28;i++)
	{
		key=*(arr+i);
        p=*(pos+i);
		j=i-1;
		
		while(j>=0 && arr[j]>key)
		{
			*(arr+j+1)=*(arr+j);
            *(pos+j+1)=*(pos+j);
			j=j-1;
		}
		*(arr+j+1)=key;
        *(pos+j+1)=p;
    }

}

void main()
{
    int i,j,a=0;
    int x[8],y[8],pos[28];
    float d[28];

	printf("\nEnter points(x.y):\n");
	for(i=0;i<8;i++)
	{
		scanf(" %d,%d",&x[i],&y[i]);
	}

	for(i=0;i<8;i++)
    {
        for(j=i+1;j<8;j++)
        {
            d[a]=sqrt(((x[j]-x[i])*(x[j]-x[i]))+((y[j]-y[i])*(y[j]-y[i])));
            pos[a]=10*i+j;
            a++;
        }
    }

    sort(d,pos);
    
    i=pos[0]/10;
    j=pos[0]%10;

    printf("Closest Pair is (%d,%d) and (%d,%d)",x[i],y[i],x[j],y[j]);
}