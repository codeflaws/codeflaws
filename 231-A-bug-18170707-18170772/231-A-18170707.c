#include<stdio.h>
int main(int argc, char *argv[])
{
int x,y,m,i,n,count;
count=0;

for (i=1;i<=n;i++)
{
scanf("%d %d %d", &x, &y, &m);
if (x+y+m>=2)
{
count=count+1;
}
}
printf("%d", count);
return 0;
}
