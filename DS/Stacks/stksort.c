#include<stdio.h>
#define MAX 10
int st[MAX];
int top=-1;
void push(int st[],int n)
{
    if(top==MAX-1)
        printf("Overflow");
    else
    {
        top++;
        st[top]=n;
    }
}
void pop(int st[])
{
    if(top==-1)
        printf("Underflow");
    else
    {
        int e=st[top];
        top--;
        printf("Popped off value=%d\n",e);
    }
}
void sort(int st[])
{
    int i,j;
    int n=top+1;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            int k;
            if(st[j]>st[j+1])
            {
                k=st[j];
                st[j]=st[j+1];
                st[j+1]=k;
            }
        }
    }
    printf("The sorted stack is:\n");
    for(i=0;i<=top;i++)
        printf("%d\t",st[i]);
}
void display(int st[])
{
    for(int i=top;i>=0;i--)
        printf("%d\t",st[i]);
    printf("\n");
}
void main()
{
    push(st,3);
    push(st,1);
    push(st,7);
    push(st,4);
    display(st);
    sort(st);
    
}