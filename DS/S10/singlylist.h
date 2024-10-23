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
struct node *delete(struct node *head)
{
  struct node *temp = NULL, *p = NULL;
  int i, pos;

  printf("\nEnter the position to delete");
  scanf("%d", &pos);
  for (i = 1, temp = head; i <= pos - 1 && temp->next != NULL; i++)
  {
    temp = temp->next;
  }
  if (temp->next != NULL)
  {
    p = temp->next;
    printf("The deleted element is %d", p->info);
    temp->next = p->next;
    free(p);
  }
  else
  {
    printf("\n Position out of order\n");
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