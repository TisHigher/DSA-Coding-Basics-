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
void inspos(Node **head)
{
    Node *temp=*head,*p=*head;
    int t;
    printf("Enter the node no. before which you want to insert ");
    scanf("%d",&t);
    for(int i=1;i<=t-1;i++)
        temp=temp->nxt;
    for(int i=1;i<=t-2;i++)
        p=p->nxt;
    Node *newnode=(Node*)malloc(sizeof(Node));
    printf("Enter the data you want to enter");
    scanf("%d",&newnode->data);
    newnode->nxt=temp;
    p->nxt=newnode;
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
    Node *head=NULL;
    create(&head);
    display(head);
    inspos(&head);
    display(head);
    return 0;  
}