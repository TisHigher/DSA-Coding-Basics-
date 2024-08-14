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
void reverse(Node** head)
{
    Node *prev,*current,*next;
    prev=NULL;
    next=*head;
    current=next;
    while(next!=NULL)
    {
        next=next->nxt;
        current->nxt=prev;
        prev=current;
        current=next;
    }
    *head=prev;
}
int main()
{
    Node *head=NULL;
    create(&head);
    display(head);
    reverse(&head);
    display(head);
    return 0;  
}