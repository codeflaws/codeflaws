#include<stdio.h>
int main(int argc, char *argv[])
{
long long int n,a,b,k,prev[5001],cur[5001],i,j,dist,count[5001],c1,h,ans,c2;
long long int start[5001],end[5001],sum[5001];
scanf("%lld %lld %lld %lld",&n,&a,&b,&k);
for(i=1;i<=n;i++)
    prev[i]=0;
prev[a]=1;
for(i=1;i<=5000;i++)
    count[i]=0;
sum[0]=0;
for(i=1;i<=n;i++)
{c2=0;
start[i]=1;
end[i]=0;
    for(j=1;j<=n;j++)
    {c1=b-j;
if(c1<0)
    c1=-c1;
    dist=j-i;
    if(dist<0)
        dist=-dist;
        if(i!=j&&dist<c1)
        {
         if(c2==0)
         {
             c2++;
             start[i]=j;

         }
         end[i]=j;
        }
    }
}
/*
for(i=1;i<=n;i++)
{
    printf("%lld %lld\n",start[i],end[i];
}
*/
for(h=1;h<=k;h++)
{
    for(i=1;i<=n;i++)
{
    sum[i]=(sum[i-1]+prev[i])%1000000007;
}
    for(i=1;i<=n;i++)
{
    cur[i]=0;

            cur[i]=(sum[end[i]]-sum[start[i]-1])%1000000007;
            if(start[i]<i&&end[i]>i)
                cur[i]=(cur[i]-prev[i]+1000000007)%1000000007;
                //printf("%lld %lld start%lld end%lld\n",i,cur[i],start[i],end[i]);

}
for(i=1;i<=n;i++)
    prev[i]=cur[i];
}
ans=0;
for(i=1;i<=n;i++)
    ans=(ans+cur[i])%1000000007;
printf("%lld\n",ans);
return 0;
}
