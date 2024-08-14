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
void display(int st[])
{
    for(int i=top;i>=0;i--)
        printf("%d\t",st[i]);
    printf("\n");
}
int main()
{
    int v,x;
    do
    {
        printf("MENU\n");
        printf("Push 1 for entering values\n");
        printf("Push 2 for removing top value\n");
        printf("Push 3 for displaying stack\n");
        printf("Push 4 for exiting SL world\n");
        printf("Enter input option\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
                printf("Enter value to be entered\n");
                scanf("%d",&v);
                push(st,v);
                break;
            case 2:
                pop(st);
                break;
            case 3:
                display(st);
                break;
        }
    }
    while(x!=4);
    return 0;
}