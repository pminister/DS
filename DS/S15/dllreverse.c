#include<stdio.h>
#include<malloc.h>
#include"doublylist.h"

void main()
{
    struct node *create();
    struct node *reverse();
    void display();

    struct node *head=NULL;
    head=(struct node *)malloc(sizeof(struct node));
    head->right=NULL;
    head->left=NULL;

    printf("\nCreate a D.L.L");
    head=create(head);
    printf("\nThe created list is:");
    display(head);

    head=reverse(head);
    printf("\nThe reversed list is:");
    display(head);
}
    
