#include<stdio.h>
int main(int argc, char *argv[])
{
int n;
scanf("%d",&n);
int b,p,t[n],c[n],i,cnt=0;
for(i=0;i<n;i++)
{
    scanf("%d%d",&t[i],&c[i]);
}
cnt=t[0];
t[n]=0;
for(i=0;i<=n-1;i++)
{
    cnt+=c[i];
    if(t[i+1]>cnt)
    cnt+=(t[i+1]-cnt);

}
b=c[0];
p=c[0];
for(i=0;i<n-1;i++)
{
    if(t[i+1]<=p+t[i])
    p=p+t[i]-t[i+1]+c[i];
    else
    p=c[i+1];
    if(p>b)
    b=p;
}
printf("%d\t%d",cnt,b);
return 0;
}
