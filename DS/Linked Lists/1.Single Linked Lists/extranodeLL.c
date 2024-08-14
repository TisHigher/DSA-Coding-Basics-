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
void fndxtra(Node **head1, Node **head2)
{
    Node *temp1=*head1,*temp2=*head2;
    int k=1;
    while (temp1!=NULL&&temp2!=NULL&&temp1==temp2)
    {
        temp1=temp1->nxt;
        temp2=temp2->nxt;
        k++;
    }
    if (temp2!=NULL)
        printf("The extra node is %d at address %d\n", temp2->data,k);
    else
        printf("No extra node found.\n");
}
int main()
{
    Node *head1=NULL,*head2=NULL;
    create(&head1);
    create(&head2);
    fndxtra(&head1,&head2);
    return 0;  
}