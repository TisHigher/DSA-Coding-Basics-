#include<stdio.h>
#include<stdlib.h>
#define MAX 50
typedef struct 
{
    int top;
    int cap;
    char *arr;
}Stack;
Stack x;
Stack *createstack(int MAX)
{
    Stack *x=malloc(sizeof(Stack));
    x->cap=MAX;
    x->top=-1;
    x->arr=malloc((x->cap)*sizeof(char));
    return a;
}
x=createstack(MAX);
void push(Stack s,char k)
{
    if(s->top==MAX)
        printf("Overflow");
    else if(s->arr=='\0')
        exit(0);
    else
    {
        top++;
        scanf("%c",&s->top); 
    }
}
void pop(Stack s)
{
    if(s->top==-1)
        printf("Underflow");
    else
    {
        char *e=s[top];
        top--;
        free(e);
    }
}
int main()
{
    Stack s;
    printf("Enter expression and press space to end");
    for(int i=0;i<MAX;i++)
    {
        scanf("%d",s->top);
        if(s[i]!='*')
            pop(s);
        else
            push(s);
    }
    printf("%s",s);
}