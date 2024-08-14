#include<stdio.h>
#include<string.h>
#define m 50
int s[m];
int top=-1;
void push(char a)
{
    if(top==m-1)
        printf("Overflow");
    else
    {
        top++;
        s[top]=a;
    }
}
char pop()
{
    int e;
    if(top==-1)
        printf("Underflow");
    else
    {
        e=s[top];
        top--;
    }
    return e;
}
void main()
{
    char r[m];
    int i,flag=1,temp;
    printf("Enter an expression\n");
    gets(r);
    for(int i=0;i<strlen(r);i++)
    {
        if(r[i]=='('||r[i]=='['||r[i]=='{')
            push(r[i]);
        if(r[i]==')'||r[i]==']'||r[i]=='}')
        {
            if(top==-1)
                flag=0;
            else
            {
                temp=pop();
                if(r[i]==')'&&(temp=='{'||temp=='['))
                    flag=0;
                if(r[i]=='}'&&(temp=='('||temp=='['))
                    flag=0;
                if(r[i]==']'&&(temp=='}'||temp==')'))
                    flag=0;
            }
        }
    }
    if(flag==1)
        printf("Valid expression");
    else
        printf("Invalid expression");
}