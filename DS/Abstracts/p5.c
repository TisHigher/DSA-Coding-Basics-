#include<stdio.h>
#include<time.h>
void main()
{
    int n,i;
    printf("Enter size");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int count=0;
    int j,key;
	for(i=0;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
            count++;
		}
		arr[j+1]=key;
	}
    printf("The number of comparisons is %d",count);
}