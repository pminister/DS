#include<stdio.h>
#include<malloc.h>

struct node
{
  int info;
  struct node *next;
};

struct node *create(struct node *head)
{
  int i,n ;
  struct node *temp=NULL, *p=NULL;
  printf("how many nodes :");
  scanf("%d", &n);
  temp = head;
  for (i=0;i<n;i++)
  {
    p=(struct node *)malloc(sizeof(struct node));
    p->next = NULL;
    printf("\nEnter the node data:");
    scanf("%d", &p->info);
    temp->next =p;
     temp=p;
  }

 return (head);
}
struct node *insert(struct node *head)
{
  struct node *temp = NULL, *p = NULL;
  int pos, i;

  printf("\nEnter the position");
  scanf("%d", &pos);

  for (temp = head, i = 1; i <= pos - 1 && temp != NULL; i++)
  {
    temp = temp->next;
  }

  if (temp != NULL)
  {
    printf("\nEnter the value to insert in singly linked list");
    p = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &p->info);
    p->next = NULL;
    p->next = temp->next;
    temp->next = p;
  }
  else
  {
    printf("Position out of order");
    return (head);
  }
}
void display(struct node *head)
{
  struct node *temp = NULL;
  temp = head->next;

  do
  {
    printf("%d\t", temp->info);
    temp = temp->next;
  } while (temp != NULL);
}

int search(struct node* head,int key)
{
  struct node *temp=NULL;
  int pos=1;
  temp=head->next;

  do
  {
    if(temp->info==key)
       return pos;
       pos++;
       temp=temp->next;
  } while (temp!=NULL);

    return -1;
}