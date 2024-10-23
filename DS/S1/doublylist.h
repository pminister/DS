#include<stdio.h>
#include<malloc.h>

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
    printf("\n");
    do
    {
        printf("%d\t",temp2->info);
        temp2=temp2->left;
    } while (temp2!=head);
}
struct node *insert(struct node* head)
{
    struct node* temp=NULL,*temp1=NULL,*p=NULL;
    int pos, i;

    printf("\nEnter position to insert value:");
    scanf("%d",&pos);

    for(temp=head,i=1;i<pos&&temp!=NULL;i++)
    {
        temp=temp->right;
    }
    if(temp!=NULL)
    {
        p=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter actual value to insert");
        scanf("%d",&p->info);
        p->left=p->right=NULL;

        if(temp->right!=NULL)
        {
            temp1=temp->right;
            p->right=temp1;
            temp1->left=p;
            temp->right=p;
            p->left=temp;
        }
        else
        {
            temp->right=p;
            p->left=temp;
        }
    }
    else
    {
        printf("\nPosition not Found");
    }
    return(head);
    
}
int search(struct node *head,int key)
{
    struct node *temp=NULL;
    int pos;
    temp=head->right;
    pos=1;

    do
    {
        if (temp->info==key)
        {
            return pos;
        }
        else
        {
            pos++;
            temp=temp->right;
        }
    } while (temp!=NULL);
    return-1;
}