#include<stdio.h>
#include<malloc.h>
#include"singlylist.h"

void main()
{
    struct node *create();
    struct node *insert();
    int search();
    void display();

    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->next=NULL;
    int c,key,q=0,ch;

    do
    {
        printf("\n1.Create\n2.Display\n3.insert\n4.Search\n5.Exit");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:head=create(head);
            break;
        case 2:display(head);
            break;
        case 3:head=insert(head);
            break;  
        case 4:
               printf("Enter the value to search");
               scanf("%d",&key);
               key=search(head,key);
               printf("The value is at:%d",key);
            break;
        
        case 5:q=1;
             break;
        }
    } while (q==0);
    
}