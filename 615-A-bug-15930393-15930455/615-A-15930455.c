#include<stdio.h>
int main(int argc, char *argv[])
{
int n,m,x;
scanf("%d %d",&n,&m);
int d[100001],count=0,a,i,j;
for(i=0;i<m;i++)
{
d[i]=0;
}
for(i=0;i<n;i++)
{
scanf("%d",&x);
for(j=0;j<x;j++)
{
scanf("%d",&a);
d[a]++;
}
}
for(i=1;i<=m;i++)
{
if(d[i]>0)
{
count+=1;
}
}
if(count==m)
{
printf("YES\n");
}
else
{
printf("NO\n");
}
return 0;
}
