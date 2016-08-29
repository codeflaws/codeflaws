#include<stdio.h>
int main(int argc, char *argv[])
{
int n,k,y[500],i,m=0;
scanf("%d %d",&n,&k);
for(i=1;i<=2*n+1;i++)
{scanf("%d",&y[i]);}
for(i=2;i<=2*n;i+=2)
{y[i]-=1;
m++;
if(m==k)
break;}
for(i=1;i<=2*n+1;i++)
{printf("%d ",y[i]);}
return(0);}
