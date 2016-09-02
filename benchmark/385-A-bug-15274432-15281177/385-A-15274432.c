#include<stdio.h>
int main(int argc, char *argv[])
{
int n,c,x[1000],i,max;
scanf("%d%d",&n,&c);
for(i=0;i<n;i++)
scanf("%d",&x[i]);
max=x[0]-x[1]-c;
for(i=0;i<n-1;i++)
if(max<(x[i]-x[i+1]-c))
max=x[i]-x[i+1]-1;
if(max>0)
printf("%d",max);
else
printf("0");
return 0;
}
