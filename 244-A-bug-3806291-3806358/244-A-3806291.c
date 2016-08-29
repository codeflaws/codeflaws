#include<stdio.h>
int main(int argc, char *argv[])
{
int n,k,a[31],i,j,l,c=0,b[31],t=1,m=0,y;
scanf("%d %d",&n,&k);
for(i=1;i<=k;i++)
{scanf("%d",&a[i]);}
for(j=1;j<=n*k;j++)
{for(l=1;l<=k;l++)
{if(j==a[l])
{c++;}}
if(c==0)
{b[t]=j;
t++;}
c=0;}
while(m!=k)
{printf("%d ",a[m+1]);
for(y=(n-1)*m+1;y<=(n-1)*m+n-1;y++)
{printf("%d ",b[y]);}
printf("\n");
m++;}
return(0);}
