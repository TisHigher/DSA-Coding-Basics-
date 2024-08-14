#include<stdio.h>
#define n 100
int a[n];
int f=-1,r=-1;
void enqueue(int a[])
{
    if(r==n-1)
        printf("Queue is Full");
    else if(f==-1&&r==-1)
    {
        f=0;
        r=0;
    }
    else
        r++;
    int t;
    printf("Enter queue element\n");
    scanf("%d",&t);
    a[r]=t;
}
void dequeue(int a[])
{
    if(f==-1||f>r)
        printf("Queue Underflow");
    else if(f==r)
    {
        f=-1;
        r=-1;
    }    
    else
        f++;
}
void display(int a[])
{
    if(f==-1&&r==-1)
        printf("Queue is empty");
    else
    {
        printf("The elements of the queue:\n");
        for(int i=f;i<=r;i++)
            printf("%d ",a[i]);
    }
}
void main()
{
    int c,i;
    do
    {
        printf("\nMENU CARD\n");
        printf("Press 1 for enqueue\n");
        printf("Press 2 for dequeue\n");
        printf("Press 3 for displaying the queue\n");
        printf("Press 4 for exiting the brahmachakra\n");
        printf("Enter your choice\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            {
                enqueue(a);
                break;
            }
            case 2:
            {
                dequeue(a);
                break;
            }
            case 3:
            {
                display(a);
                break;
            }
        }
    }
    while(c!=4);
}