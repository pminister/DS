#include<stdio.h>
int linsearch();

void main()
{
    int i,n,v;
    printf("Enter the No of Elements");
    scanf("%d",&n);

    int x[n];
    printf("Enter actual values");

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&x[i]);
    }
    printf("Enter the value to search");
    scanf("%d",&v);
    linsearch(x,n,v);
    
}

int linsearch(int x[],int n,int v)
{
    int i,flag=0;

    for ( i = 0; i < n; i++)
    {
        if (x[i]==v)
        {
            flag=1;
            break;
        }
    }
    if(flag=1)
    printf("Required number is at %d",i+1);
    else
    printf("required data not fount");
}
