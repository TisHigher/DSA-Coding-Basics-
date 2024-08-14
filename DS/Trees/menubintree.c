#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}Tree;
void create()
{
    Tree *newnode=(Tree*)malloc(sizeof(Tree));
    printf("Enter value for node and press -1 to end tree route");
    scanf("%d",&newnode->data);
    if(newnode->data==-1)
        return NULL;
    printf("Enter value for left child of %d",newnode->data);
    newnode->left=create();
    printf("Enter value for right child of %d",newnode->data);
    newnode->right=create();
    return newnode;
}
