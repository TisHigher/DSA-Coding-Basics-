#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
	int n;
	printf("Enter n - ");
	scanf("%d",&n);
	FILE *fp;
	fp=fopen("randnoslimit.txt","r");
	if(fp==NULL)
	{
		printf("FILE NOT FOUND");
		exit(0);
	}
	int arr[n],i;
	for(i=0;i<n;i++)
	 fscanf(fp,"%d",&arr[i]);
	fclose(fp);
	clock_t start=clock();
	int j,key;
	for(i=0;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
	fp=fopen("insertion.sort.txt","w");
	for(i=0;i<n;i++)
	{
		fprintf(fp,"%d\n",arr[i]);
	}
	fclose(fp);
	clock_t end=clock();
	clock_t endtime=clock()-start; 
	double time_taken = ((double)end)/CLOCKS_PER_SEC;
	printf("Time measured - %0.6f seconds \n",time_taken);
}