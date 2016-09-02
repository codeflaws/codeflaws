#include<stdio.h>
int main(int argc, char *argv[])
{
int i,j,k,n,max;
scanf("%d",&n);
int a[n],good[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
if(n>2)
good[0]=2;
else
good[0]=n;
k=0;
for(i=2;i<n;i++)
{
if(a[i]==a[i-1]+a[i-2])
good[k]++;
else
{
    good[k+1]=0;
    k++;

}

}
for(i=0;i<=k;i++)
{
if(i==0)
max=good[0];
if(good[i]>max)
max=good[i];
}
printf("%d",max);
return 0;
}
