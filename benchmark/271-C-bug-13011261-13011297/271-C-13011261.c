#include<stdio.h>
int a[3000005];
int main(int argc, char *argv[])
{
int n,k,i;
scanf("%d%d",&n,&k);
if(3*k > n)printf("-1\n");
else {
for(i=1;i<=2*k;i+=2)
{
a[i] = a[i+1] = i;
}
int j = 1;
for(;i<=3*k;i++)a[i] = j++;
for(i=1;i<=n;i++)
printf("%d ",a[i]);
}


return 0;
}