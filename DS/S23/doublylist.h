struct node
{
  int info;
  struct node *right;
  struct node *left;
};

struct node *create(struct node *head)
{
    struct node* temp=NULL, *p=NULL;
    int i,n;

    temp=head;

    printf("Enter the No of Values");
    scanf("%d",&n);

    printf("Enter Actual Values:");

    for(i=0;i<n;i++)
    {
        p=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&p->info);
        p->left=p->right=NULL;

        temp->right=p;
        p->left=temp;
        temp=p;
    }
  return head;
}

void display(struct node *head)
{
    struct node *temp1=NULL,*temp2=NULL;
    temp1=head->right;

    do
    {
        printf("%d\t",temp1->info);
        temp2=temp1;
        temp1=temp1->right;
    } while (temp1!=NULL);
    do
    {
        printf("%d\t",temp2->info);
        temp2=temp2->left;
    } while (temp2!=head);
}

struct node *reverse(struct node *head)
{
    struct node *t1=NULL,*t2=NULL,*t3=NULL;
   
    t1=head->right;
    t2=t1->right;
    t1->right=NULL;
    t3=t2->right;
     if(t1==NULL)
    {
       return NULL;
    }

    do
    {
        t2->right=t1;
        t1->left=t2;
        t1=t2;
        t2=t3;
        t3=t3->right;
    } while (t3!=NULL);
    t2->right=t1;
    t1->left=t2;
    head->right=t2;
    t2->left=head;
    return (head); 
}
