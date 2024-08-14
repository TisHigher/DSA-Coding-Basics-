#include<stdio.h>

void insertionsort(int a[], int n) {
    for(int i = 1; i < n; i++) {
        int temp = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];
            j--;
 }
        a[j + 1] = temp;
    }
}

int main() {
    int a[10], n;

    printf("Enter the number of elements (max 10): ");
    scanf("%d", &n);

    if (n > 10 || n <= 0) {
        printf("Invalid input for the number of elements. Exiting.\n");
        return 1;
    }

    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    insertionsort(a, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}