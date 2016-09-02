#include<stdio.h>
int main(int argc, char *argv[])
{
int p[5],a,b,i,j,k,l,m,c1=0,cnt=0;
scanf("%d %d %d %d %d %d",&p[1],&p[2],&p[3],&p[4],&a,&b);
for(i=a;i<=b;i++)
{for(j=1;j<=4;j++)
{for(k=1;k<=4;k++)
{for(l=1;l<=4;l++)
{for(m=1;m<=4;m++)
{if(j!=k&&k!=l&&l!=m&&j!=m&&j!=l&&k!=m)
{if(((((i%p[j])%p[k])%p[l])%p[m])==i)
c1++;}}}}}
if(c1==7)
cnt++;
c1=0;}
printf("%d",cnt);
return 0;}