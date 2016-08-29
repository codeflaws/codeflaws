#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,mon;
    scanf("%d",&n);
    scanf("%d",&mon);
    int min=0,max=0,a;
    long ans=mon;
    while(n--)
    {
    scanf("%d",&a);
    if (min==0) min=a;
    else if (a<min)min=a;
    else if(a>max) max=a;
    if(max!=0&&min!=0) 
    {
    long val=(mon/min)*max+mon%min;
    if(val>ans) ans=val;
    //printf("%d %d %ld %ld\n",min,max,val,ans);
    max=0;
    }
    }
    printf("%ld",ans);
    return 0;
}