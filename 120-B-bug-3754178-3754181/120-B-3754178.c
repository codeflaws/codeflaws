#include<stdio.h>

int main(int argc, char *argv[])
{
int n,a[1000];
int i,j,k;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
while(a[k-1]!=1)
{if(k==n)
k=1;
else
k++;
}
printf("%d",k);
return(0);
}