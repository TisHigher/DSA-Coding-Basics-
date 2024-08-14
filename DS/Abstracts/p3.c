#include<stdio.h>
void sjf(int n,int bt[])
{
    int wt[n],tat[n],total_wt=0,total_tat=0;
    for(int i=0;i<n-1;i++)
    {
        int min_indx=i;
        for(int j=i+1;j<n;j++)
        {
            if(bt[j]<bt[min_indx])
                min_indx=j;
        }
    int temp=bt[min_indx];
    bt[min_indx]=bt[i];
    bt[i]=temp;
    }
    wt[0]=0;
    for(int i=1;i<n;i++)
    {
        wt[i]=bt[i-1]+wt[i-1];
        total_wt+=wt[i];  
    }
    for(int i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        total_tat+=tat[i];
    }
    printf("Process\tBurst time\tWaiting time\tTurnaround time\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
    }
    float avg_wt=(float)total_wt/n;
    float avg_tat=(float)total_tat/n;
    printf("Average waiting time:%.2f\n",avg_wt);
    printf("Average turnaround time:%.2f\n",avg_tat);
}
void main()
{
    int n;
    printf("Enter the number of processes:");
    scanf("%d",&n);
    int bt[n];
    printf("Enter the burst time for each process\n");
    for(int i=0;i<n;i++)
    {
        printf("process%d: ",i+1);
        scanf("%d",&bt[i]);
    }
    sjf(n,bt);
}