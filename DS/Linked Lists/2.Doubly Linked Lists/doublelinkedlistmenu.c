#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *prev;
    struct node *nxt;
}Node;
void create(Node **head)
{
    Node *newnode,*temp;
    int n;
    printf("Enter no.of nodes");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        newnode=(Node*)malloc(sizeof(Node));
        printf("Enter data for node %d:\t",i+1);
        scanf("%d",&newnode->data);
        newnode->prev=NULL;
        newnode->nxt=NULL;
        if(*head==NULL)
        {
            *head=newnode;
            temp=newnode;
        }
        else
        {
            newnode->prev=temp;
            temp->nxt=newnode;
            temp=newnode;
        }
    }
}
void displayfwd(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->nxt;
    }
    printf("\n");
}
void displaybkwd(Node *head)
{
    Node *temp=head;
    while(temp->nxt!=NULL)
        temp=temp->nxt;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->prev;
    }
    printf("\n");
}
void insertbeg(Node **head)
{
    Node *temp=*head;
    Node *newnode=(Node*)malloc(sizeof(Node));
    printf("Enter the data you want to enter in the beginning\n");
    scanf("%d",&newnode->data);
    newnode->nxt=temp;
    newnode->prev=NULL;
    temp->prev=newnode;
    *head=newnode;
}
void insertend(Node **head)
{
    Node *temp=*head;
    while(temp->nxt!=NULL)
        temp=temp->nxt;
    Node *newnode=(Node*)malloc(sizeof(Node));
    printf("Enter the data you want to enter in the end\n");
    scanf("%d",&newnode->data);
    temp->nxt=newnode;
    newnode->prev=temp;
    newnode->nxt=NULL;
}
void deletebeg(Node **head)
{
    Node *p1;
    if((*head)->nxt!=NULL)
    {
        p1=*head;
        *head=(*head)->nxt;
        (*head)->prev=NULL;
    }
    else
    {
        p1=*head;
        *head=NULL;
    }
    free(p1);
}
void deleteend(Node **head)
{
    Node *temp=*head;
    while(temp->nxt!=NULL)
        temp=temp->nxt;
    Node *p2=temp;
    temp=temp->prev;
    temp->nxt=NULL;
    free(p2);
}
int main()
{
    Node *head=NULL;
    create(&head);
    displayfwd(head);
    displaybkwd(head);
    insertbeg(&head);
    displayfwd(head);
    insertend(&head);
    displayfwd(head);
    deletebeg(&head);
    displayfwd(head);
    deleteend(&head);
    displayfwd(head);
    return 0;
}