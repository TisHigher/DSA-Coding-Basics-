#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int stack[MAX];
int top = -1;
void push(int data) 
{
    if (top >= MAX-1) 
    {
        printf("Stack overflow\n");
        exit(1);
    }
    stack[++top] = data;
}
int pop() 
{
    if (top == -1) {
        printf("Stack underflow\n");
        exit(1);
    }
    return stack[top--];
}
int isEmpty() 
{
    return (top == -1);
}
void sortStack(int data){
    if (isEmpty() || data >= stack[top]){
        push(data);
    } 
    else 
    {
        int temp = pop();
        sortStack(data);
        push(temp);
    }
}

void displayStack() {
    printf("Stack: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    
    push(9);
    push(0);
    push(8);
    push(2);
    push(3);
    printf("Stack before sorting: ");
    displayStack();
    while (!isEmpty()) 
    {
        int temp = pop();
        sortStack(temp);
    }
    printf("Sorted stack: ");
    displayStack();
    return 0;
}