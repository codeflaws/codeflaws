#include<stdio.h>
int main(int argc, char *argv[])
{
int n,k,i,q,p[100001];
scanf("%d%d",&n,&k);
q=k+2;
for(i=0;i<n;i++)
{
if(k>=0)
{
p[i]=k+1;
k--;
}
else
{
p[i]=q;
q++;
}
}
for(i=0;i<n;i++)
{
printf("%d",p[i]);
}
return 0;
}
