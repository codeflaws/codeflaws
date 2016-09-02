#include<stdio.h>
int main(int argc, char *argv[])
{
int n,k,i,used[100001]={0};
scanf("%d %d",&n,&k);
int l=1,r=n;
for(i=0;i<k;i++)
{
if(!(i&1))
{
used[l]=1;
printf("%d ",l);
l++;
}
else
{
used[r]=1;
printf("%d ",r);
r--;
}
}
if(k&1)
{
for(i=0;i<n-1;i++)
{
if(used[i+1]==0)
{
printf("%d ",i+1);
}
}
}
else
{
for(i=n-1;i>=0;i--)
{
if(used[i+1]==0)
{
printf("%d ",i+1);
}
}
}
return 0;
}
