#include<stdio.h>
void main()
{
    int m,n;
    printf("Enter no.of rows\n");
    scanf("%d",&m);
    printf("Enter no.of columns\n");
    scanf("%d",&n);
    int a[m][n];
    printf("Enter matrix elements\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Row %d,Column %d:- ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}