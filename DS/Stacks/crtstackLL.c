#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *nxt;
}stacknode;
void push(stacknode **top)
{
    stacknode *newnode,*temp;
    newnode=(stacknode*)malloc(sizeof(stacknode));
    printf("Enter data for new stacknode\n");
    scanf("%d",&newnode->data);
    newnode->nxt=NULL;
    if(*top==NULL)
    {
        *top=newnode;
        temp=newnode;
    }
    else
    {
        temp->nxt=newnode;
        temp=newnode;
    }
}
void pop(stacknode **top)
{
    if(*top==NULL)
        printf("Stack underflow");
    else
    {
        stacknode *p=*top;
        *top=(*top)->nxt;
        free(p);
    }   
}
void peek(stacknode **top)
{
    if(*top==NULL)
        printf("Empty stack");
    else
        printf("%d",(*top)->data);
}
void display(stacknode *top)
{
    stacknode *temp=top;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->nxt;
    }
}
void main()
{
    stacknode *top=NULL;
    push(&top);
    push(&top);
    push(&top);
    pop(&top);
    pop(&top);
    push(&top);
    display(top);
}