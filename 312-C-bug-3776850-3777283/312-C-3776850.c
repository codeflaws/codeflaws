#include<stdio.h>
int main(int argc, char *argv[])
{
int cn=0,i,n,k,p;
scanf("%d%d",&n,&k);
if(k>(n*(n-1))/2)
{
printf("no solution\n");
return(0);
}
p=n;
while(p--)
{
printf("0 %d\n",cn);
cn++;
}
return(0);
}
