#include<stdio.h>
int main(int argc, char *argv[])
{
int n,i,a,b,c,d;

    scanf("%d",&n);

   for(i=n+1;i<=9000;i++)
    {a=i%10;
    b=i/10%10;
    c=i/100%10;
    d=i/1000%10;

    if ((a!=b)&&(a!=c)&&(a!=d)&&(b!=c)&&(b!=d)&&(c!=d))
    {
        printf("%d",i);


  return 0;}
}}
