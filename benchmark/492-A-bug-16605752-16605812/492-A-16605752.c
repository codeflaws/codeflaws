#include<stdio.h>
int main(int argc, char *argv[])
{
int n,i;
printf("enter the total no. of coins?\n");
scanf("%d",&n);
for(i=0;((i*i*i+3*i*i+2*i)/6)<=n;i++){}
printf("%d",i-1);
return 0;
}
