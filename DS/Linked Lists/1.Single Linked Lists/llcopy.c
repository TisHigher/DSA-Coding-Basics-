#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *nxt;
} Node;

void create(Node **head)
{
    int n;
    Node *temp, *newNode;
    printf("Enter no.of nodes\n");
    scanf("%d", &n);
    for (int i=0;i<n;i++)
    {
        newNode=(Node*)malloc(sizeof(Node)); 
        printf("Enter value for node %d:",i+1);
        scanf("%d",&newNode->data);
        newNode->nxt = NULL;
        if (*head==NULL)  
        {
            *head = newNode;  
            temp = newNode;   
        }
        else
        {
            temp->nxt=newNode;  
            temp = newNode;       
        }
    }
}
void copy(Node **head1,Node **head2)
{
    Node *temp1=*head1,*temp2=*head2,*copynew;
    while(temp1!=NULL)
    {
       copynew=(Node*)malloc(sizeof(Node));
       copynew->data=temp1->data;
       copynew->nxt=NULL;
       if(*head2==NULL)
       {
            *head2=copynew;
            temp2=*head2;
       }
       else
       {
            temp2->nxt=copynew;
            temp2=copynew;
       }
       temp1=temp1->nxt;
    } 
}
void display(Node *head)
{
    Node *temp = head;  
    while (temp!=NULL)
    {
        printf("%d ", temp->data);  
        temp = temp->nxt;           
    }
    printf("\n");
}
int main()
{
    Node *head1=NULL,*head2=NULL;
    create(&head1);
    display(head1);
    copy(&head1,&head2);
    display(head2);
    return 0;  
}