#include<stdio.h>
int cmpfunc(const void *a, const void *b)
{
    return(*(int*)a-*(int*)b);
}
int main(int argc, char *argv[]){
int n;

scanf("%d", &n);
int m=n*n;
int count1[51]={0},count2[51]={0};
int i,h,v,arr[m],j=0;
for(i=0;i<m;i++)
{
    scanf("%d %d", &h, &v);
    if(count1[h]!=0||count2[v]!=0)
        continue;
    else if(count1[h]==0&&count2[v]==0)
        {
        arr[j]=i+1;
        j++;
    }
    count1[h]++;
    count2[v]++;
}
qsort(arr,j,sizeof(int),cmpfunc);
for(i=0;i<=j;i++)
{
    if(arr[i]!=0)
    printf("%d ",arr[i] );
}
return 0;
}
