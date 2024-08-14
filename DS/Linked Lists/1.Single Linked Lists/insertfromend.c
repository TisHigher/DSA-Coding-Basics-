#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *nxt;
}Node;
void create(Node **head)
{
    Node *temp,*newnode;
    int n;
    printf("Enter no.of nodes");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
       newnode=(Node*)malloc(sizeof(Node));
       printf("Enter data for node %d",i+1);
       scanf("%d",&newnode->data);
       newnode->nxt=NULL;
       if(*head==NULL)
       {
        *head=newnode;
        temp=newnode;
       } 
       else
       {
        temp->nxt=newnode;
        temp=newnode;
       }
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
void insertfromend(Node **head)
{
    Node *temp=*head;
    while(temp->nxt!=NULL)
    {
        temp=temp->nxt;
    }
    Node *newnode;
    newnode=(Node*)malloc(sizeof(Node));
    printf("Enter value for endnode:-");
    scanf("%d",&newnode->data);
    newnode->nxt=NULL;
    temp->nxt=newnode;
}
int main()
{
    Node *head=NULL;
    create(&head);
    display(head);
    insertfromend(&head);
    display(head);
    return 0;  
}