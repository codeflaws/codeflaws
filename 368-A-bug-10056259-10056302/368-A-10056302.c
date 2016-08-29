#include<stdio.h>
int partition(int* ara,int s,int e)
{
    int pivot=ara[e],t;
    int partition_index=s;
    int i;
    for(i=s;i<e;i++){
        if(ara[i]<=pivot){
            t=ara[i];
            ara[i]=ara[partition_index];
            ara[partition_index]=t;
            partition_index++;
        }
    }
    t=ara[partition_index];
    ara[partition_index]=ara[e];
    ara[e]=t;
    return partition_index;
}
void quick_sort(int* ara,int s,int e)
{
    int partition_index;
    if(s<e){
        partition_index=partition(ara,s,e);
        quick_sort(ara,s,partition_index-1);
        quick_sort(ara,partition_index+1,e);

    }
}
int main(int argc, char *argv[])
{
    int i,n,m,d,cost,profit,sum,ara[101];
    scanf("%d%d",&n,&d);
    for(i=0;i<n;i++){
        scanf("%d",&cost);
        ara[i]=cost;
    }
    scanf("%d",&m);
    if(m>n){
        sum=0;
        for(i=0;i<n;i++){
           sum+=ara[i];
        }
        profit=sum-(d*(m-n));
        printf("%d",profit);
    }
    else{
        quick_sort(ara,0,n-1);
        sum=0;
        for(i=0;i<m;i++){
            sum+=ara[i];
        }
        printf("%d",sum);
    }
    return 0;

}
