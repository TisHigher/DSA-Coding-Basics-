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
        newNode->nxt =*head;
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
void display(Node *head)
{
    Node *temp = head;  
    while (temp->nxt!=head)
    {
        printf("%d ", temp->data);  
        temp = temp->nxt;           
    }
    printf("%d",temp->data);
    printf("\n");
}
void insertend(Node **head)
{
    Node *temp=*head;
    while(temp->nxt!=*head)
    {
        temp=temp->nxt;
    }
    Node *newnode=(Node*)malloc(sizeof(Node));
    printf("Enter data at end");
    scanf("%d",&newnode->data);
    temp=newnode;
    newnode=*head;
    *head=newnode;
}
void insertbeg(Node**head)
{
    Node *temp=*head;
    while(temp->nxt!=*head)
    {
        temp=temp->nxt;
    }
    Node *newnode=(Node*)malloc(sizeof(Node));
    printf("Enter data at beginning");
    scanf("%d",&newnode->data);
    temp->nxt=newnode;
    newnode->nxt=*head;
    *head=newnode;
}
void deleteend(Node**head)
{
    Node *temp=*head,*p;
    while(temp->nxt!=*head)
    {
        p=temp;
        temp=temp->nxt;
    }
    p->nxt=*head;
    free(temp);
}
void deletebeg(Node**head)
{
    Node*temp=*head;
    while(temp->nxt!=*head)
    {
        temp=temp->nxt;
    }
    Node *p=*head;
    temp=temp->nxt;
    temp=*head;
    free(p);
}
int main()
{
    Node *head=NULL;
    create(&head);
    display(head);
    insertend(&head);
    display(head);
    insertbeg(&head);
    display(head);
    deleteend(&head);
    display(head);
    deletebeg(&head);
    display(head);
    return 0;  
}