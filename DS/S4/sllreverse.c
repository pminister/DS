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
  printf("\nhow many nodes :");
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
struct node *reverse(struct node *head)
{
   struct node *t1=NULL,*t2=NULL,*t3=NULL;
   t1=head->next;

   if (t1==NULL)
   {
    return NULL;
   }
   
   t2=t1->next;
   t3=t2->next;
   t1->next=NULL;


   while(t3!=NULL)
   {
    t2->next=t1;
    t1=t2;
    t2=t3;
    t3=t3->next;
    t2->next=t1;
    head->next=t2;
   
   }

    return head;

}

void main()
{
    struct node *create();
    struct node *reverse();
    void display();

    struct node *head=NULL;
    head=(struct node *)malloc(sizeof(struct node));

    head->next=NULL;
    printf("Create list");
    head=create(head);
    printf("the created list is:\n");
    display(head);
    head=reverse(head);
    printf("The reversed list is:\n");
    display(head);

}