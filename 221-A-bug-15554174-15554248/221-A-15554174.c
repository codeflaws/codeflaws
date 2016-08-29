#include<stdio.h>
int main(int argc, char *argv[])
{
int n,i,j,a[101],temp;
scanf("%d",&n);
j=0;
for(i=1;i<=n;i++)
{
a[j]=i;
j++;
}
for(i=n-1;i>=1;i--)
{
temp=a[i];
a[i]=a[i-1];
a[i-1]=temp;
}
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
return 0;
}


