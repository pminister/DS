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

int count(struct node *head)
{
  struct node *temp = NULL;
  int c = 0;
  temp = head->next;
  do
  {
    c++;
    temp = temp->next;
  } while (temp != NULL);

  return c;
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