#include<stdio.h>
int main(int argc, char *argv[])
{
int a,b,x[500],y[500],i,j,t=1;
scanf("%d %d",&a,&b);
x[0]=0;
for(i=1;i<=400;i+=4)
{x[i]=t;
x[i+1]=t;
x[i+2]=-1*t;
x[i+3]=-1*t;
t++;}
t=1;
y[0]=0;
y[1]=0;
for(i=2;i<=400;i+=4)
{y[i]=t;
y[i+1]=t;
y[i+2]=-1*t;
y[i+3]=-1*t;
t++;}
for(i=0;i<400;i++)
{if(((a>=x[i]&&b>=y[i])&&(a<=x[i+1]&&b<=y[i+1]))||((a>=x[i+1]&&b>=y[i+1])&&(a<=x[i]&&b<=y[i])))
{j=i;
break;}}
printf("%d",j);
return(0);}
