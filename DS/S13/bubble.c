#include<stdio.h>

void bubble(int x[],int n);

void main()
{
    int n,i;

    printf("Enter the Size of Array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Values of Array");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    bubble(arr,n);
    
      for ( i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
}
void bubble(int x[],int n)
{   
   int i,j,temp=0;
   for (i = 0;i < n-1; i++)
   {
     for (j = 0; j < n-i-1; j++)
     {
        if (x[j]>x[j+1])
        {
          temp=x[j];
          x[j]=x[j+1];
          x[j+1]=temp;  
        }
     }
   }
}