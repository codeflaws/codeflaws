#include<stdio.h>
#define MAX 100
int main(int argc, char *argv[])
{
int n,d,l,a[MAX],sum,k,j,i,p,flag=0;
a[0]=0;
scanf("%d%d%d",&n,&d,&l);
for(i=1;i<=n;i++)
a[i]=1;
sum=n/2;
if(n&1&&d>0)
sum++;

if(d>0)
p=1;
else 
p=2;
if(l==1)
{
if ((d==0&&n%2==0)||(d==1&&(n&1)))
flag=1;
}
while(a[p]<l)
{
if((d==0)&&(n%2==0))
{
flag=1;
break;
}
a[p]++;
if((d==0)&&(n&1))
{
flag=1;
break;
}
//printf("%d: %d \n",p,a[p]);
sum++;
//printf("%d\n ",sum);

if(sum-n/2==d||((n%2==0)&&sum-n/2==-d)||((n&1)&&sum-n/2==1-d))
{
//printf("%d%d\n\n",sum,n/2);
flag=1;
break;
}

if((a[p]==l)&&(p+2<=n))
p+=2;
}


if(flag==0)
printf("-1");
else
{
for(i=1;i<=n;i++)
printf("%d ",a[i]);
}
return 0;
}
