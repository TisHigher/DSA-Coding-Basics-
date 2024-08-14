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
void count(Node **head)
{
    Node *temp=*head;
    int c=0;
    while(temp!=NULL)
    {
        c++;
        temp=temp->nxt;
    }
    printf("%d",c);
}
int main()
{
    Node *head=NULL;
    create(&head);
    display(head);
    count(&head);
    return 0;  
}
