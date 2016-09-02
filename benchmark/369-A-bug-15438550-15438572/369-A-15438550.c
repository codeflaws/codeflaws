#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,m,k,a[1001],i,count1=0,count2=0,wash=0;
    scanf("%d %d %d",&n,&m,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==1)
            count1++;
        else if(a[i]==2)
            count2++;
    }
    if(count1>m)
    {
        wash=count1-m;
        m=0;
    }
    else if(count1<m)
    {
        m=m-count1;
    }
    k=k+m;
    if(count2>k)
    {
        wash=wash+count2-k;
        k=0;
    }
   printf("%d",wash);
return 0;
}
