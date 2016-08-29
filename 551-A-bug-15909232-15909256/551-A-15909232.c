#include<stdio.h>
int main(int argc, char *argv[])
{
int a[2000],j,i,b[2000],n,count,c[2000];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n;i++)
b[i]=a[i];

for(i=0;i<n;i++)
{
count=0;
for(j=0;j<n;j++)
{
if(a[i]<b[j])
count++;
}
c[i]=count;
}

for(i=0;i<n;i++)
printf("%d",c[i]+1);
return 0;
}
