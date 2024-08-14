#include<stdio.h>
#define n 10
void bubblesort(int a[], int size);
int main()
{
    int i,j,a[n];
    printf("Enter array elements\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    bubblesort(a, n);
    int k;
    printf("Enter k of kth largest number of array\n");
    scanf("%d", &k);
    int t = k - 1;
    if (t >= n)
    {
        printf("Invalid value of k\n");
        return 1; 
    }
    int e = n - t - 1;
    printf("The %dth largest number of the array is %d\n", k, a[e]);
    return 0;
}

void bubblesort(int a[], int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            int c;
            if(a[j]>a[j+1])
            {
                c=a[j];
                a[j]=a[j+1];
                a[j+1] = c;
            }
        }
    }
}