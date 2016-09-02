#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
int n,m,i;
scanf("%d %d",&n,&m);
int a[n+1],b[m+1];
for(i=0;i<n+1;i++)
scanf("%d",&a[i]);
for(i=0;i<m+1;i++)
scanf("%d",&b[i]);
if(m>n)
printf("0/1");
else if(n>m)
{if(a[0]>0)
printf("Infinity");
else
printf("-Infinity");}
else
{int a0=abs(a[0]),b0=abs(b[0]);
int max=(a0>=b0)?a0:b0;
for(i=2;i<=max;i++)
{if(a0%i==0&&b0%i==0)
{a0/=i;
b0/=i;
if(i==max)
break;
else
i=1;}}
if(a[0]*b[0]<0)
printf("-%d/%d",a0,b0);
else
printf("%d/%d",a0,b0);
}
return(0);}
