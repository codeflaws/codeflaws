#include<stdio.h>
int main(int argc, char *argv[])
{
int n;
scanf("%d",&n);
int b=n/7;
int c=n%7;
int max=2*b;
int min=2*b;
if(c==1)
max=max+1;
if(c==2)
max=max+2;
if(c==3)
max=max+2;
if(c==4)
max=max+2;
if(c==5)
{
max=max+2;
min=min+1;
}
if(c==6)
{
max=max+2;
min=min+1;
}
printf("%d %d",min,max);
return 0;
}
