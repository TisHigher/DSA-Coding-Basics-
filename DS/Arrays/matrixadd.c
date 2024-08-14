#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("Matrix 1\nEnter row and column");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Matrix 2\nEnter row and column");
    scanf("%d",&c);
    scanf("%d",&d);
    if(a!=c||b!=d)
        printf("Addition could not be performed");
    int x[a][b],y[c][d],sum[a][b];
    printf("For Matrix 1\n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("Row %d,Column %d:- ",i+1,j+1);
            scanf("%d",&x[i][j]);
        }
    }
    printf("For Matrix 2\n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<d;j++)
        {
            printf("Row %d,Column %d:- ",i+1,j+1);
            scanf("%d",&y[i][j]);
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            sum[i][j]=0;
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            sum[i][j]=sum[i][j]+x[i][j]+y[i][j];
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}