#include <stdio.h>
#define n 10
int q[n],k,f=-1,r=-1,x,a,c1,c2;
void enqueuefront();
void enqueuerear();
void dequeuefront();
void dequeuerear();
void display();
int main() {
    printf("Enter your choice:\n");
    printf("1.Input restricted Queue\n");
    printf("2.Output Restricted Queue\n");
    scanf("%d",&k);
    switch (k) {
        case 1:
            printf("Enter the operation you want to perform\n");
            printf("1. Input at front\n");
            printf("2. Delete at Front\n");
            printf("3. Delete at Rear\n");
            printf("4. Display\n");
            printf("0. Exit\n");
            scanf("%d",&c1);
            while (c1!= 0) {
                switch (c1) {
                    case 1:
                        enqueuefront();
                        break;
                    case 2:
                        dequeuefront();
                        break;
                    case 3:
                        dequeuerear();
                        break;
                    case 4:
                        display();
                        break;
                    case 0:
                        printf("Exiting....\n");
                        break;
                    default:
                        printf("Invalid choice\n");
                        break;
                }
                printf("Enter the operation you want to perform\n");
                scanf("%d",&c1);
            }
            break;
        case 2:
            printf("Enter the operation you want to perform\n");
            printf("1. Delete at front\n");
            printf("2. Input at Front\n");
            printf("3. Input at Rear\n");
            printf("4. Display\n");
            printf("0. Exit\n");
            scanf("%d", &c2);
            while (c2!=0) {
                switch (c2) {
                    case 1:
                        dequeuefront();
                        break;
                    case 2:
                        enqueuefront();
                        break;
                    case 3:
                        enqueuerear();
                        break;
                    case 4:
                        display();
                        break;
                    case 0:
                        printf("Exiting....\n");
                        break;
                    default:
                        printf("Invalid choice\n");
                        break;
                }
                printf("Enter the operation you want to perform\n");
                scanf("%d",&c2);
            }
            break;
        default:
            printf("Invalid Choice\n");
            break;
    }
    return 0;
}
void enqueuefront() {
    printf("Enter the value you want to enter at front\n");
    scanf("%d",&x);
    if (f==0&&r==n-1) {
        printf("Queue is full\n");
    } else if (f==-1&&r==-1) {
        f=r=0;
        q[f]=x;
    } else {
        f--;
        if (f<0)
            f=n-1;
        q[f]=x;
    }
}
void enqueuerear() {
    printf("Enter the value you want to enter at rear\n");
    scanf("%d",&x);
    if (f==0&&r==n-1||f==r+1) {
        printf("Queue is full\n");
    } else if (f==-1&&r==-1) {
        f=r=0;
        q[r]=x;
    } else if (r==n-1) {
        r=0;
        q[r]=x;
    } else {
        r++;
        q[r]=x;
    }
}
void dequeuefront() {
    if(f==-1&&r==-1) {
        printf("Queue is empty\n");
    } else if (f==r) {
        a=q[f];
        f=r=-1;
        printf("The deleted element from front is %d\n",a);
    } else if (f==n-1) {
        a=q[f];
        f=0;
        printf("The deleted element from front is %d\n", a);
    } else {
        a=q[f];
        f++;
        printf("The deleted element from front is %d\n", a);
    }
}
void dequeuerear() {
    if (f==-1&&r==-1) {
        printf("Queue is empty\n");
    } else if (f==r) {
        a=q[r];
        printf("The deleted element from rear is %d\n", a);
        r=f=-1;
    } else if (r==0) {
        a=q[r];
        printf("The deleted element from rear is %d\n", a);
        r=n-1;
    } else {
        a=q[r];
        printf("The deleted element from rear is %d\n", a);
        r--;
    }
}
void display() {
    if (f==-1&&r==-1) {
        printf("Queue is empty\n");
        return;
    }
    int i = f;
    printf("Queue elements: ");
    while (1) {
        printf("%d ",q[i]);
        if (i == r)
            break;
        i = (i + 1) %n;
    }
    printf("\n");
}