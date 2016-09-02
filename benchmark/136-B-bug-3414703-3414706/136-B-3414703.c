#include<stdio.h>
long long int dk(long long int m,long long int n[]);
int main(int argc, char *argv[])
{
long long int a,b,c,d=0,i,e=0,k=0,g=0;
long long int p[10000]={0},q[10000],f[10000];
scanf("%I64d%I64d",&a,&c);
d=dk(a,p);
e=dk(c,q);
if(d==e)
{
next:
for(i=0;i<d;i++)
{
k=0;
while(((p[i]+k)%3)!=q[i])
{
k++;
}
f[i]=k;
}
}
else
{
if(d>e)
{
while(d!=e)
{
q[e]=0;
e++;
}
goto next;}
else
{
while(d!=e)
{
p[d]=0;
d++;
}
goto next;}
}
for(i=0;i<d;i++)
{
g=g+f[i]*pow(3,i);
}
printf("%I64d",g);
return(0);
}
long long int dk(long long int m,long long int n[])
{
    int x=0;
while(m>0)
{
n[x++]=m%3;
m=(m-(m%3))/30;
}
return(x);
}
