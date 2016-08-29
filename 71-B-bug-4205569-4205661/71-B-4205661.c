#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[])
{
int n,k,i,t,d;
float c;
scanf("%d%d%d",&n,&k,&t);
c=(t*n*k)/100;
d=floor(c);
for(i=0;i<d/k;i++)
printf("%d ",k);
if(t!=100)
printf("%d ",d%k);
for(i=d/k+1;i<n;i++)
printf("%d ",0);
return 0;
}
