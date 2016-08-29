#include<stdio.h>
int main(int argc, char *argv[])
{
int n,x,a[101],b[101],k,i=2,n1[6],j,l,c=0,e;
scanf("%d",&n);
scanf("%d",&x);
for(e=1;e<=n;e++)
{scanf("%d %d",&a[e],&b[e]);}
while(i!=n+1)
{k=7-x;
if(a[i]==k||b[i]==k)
{break;}
else
{n1[1]=a[i];
n1[2]=b[i];
n1[3]=7-a[i];
n1[4]=7-b[i];
n1[5]=k;}
for(j=1;j<=6;j++)
{for(l=1;l<=5;l++)
{if(j!=n1[l])
{c++;}}
if(c==5)
{x=j;}
c=0;}
i++;}
if(i==n+1)
printf("YES");
else
printf("NO");
return(0);}
