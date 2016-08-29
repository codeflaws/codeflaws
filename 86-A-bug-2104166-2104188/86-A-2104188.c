#include<stdio.h>
int main(int argc, char *argv[])
{long long int l,r,t,n,x=0;
scanf("%I64d %I64d",&r,&l);
n=l;
while(n!=0)
{n=n/10;
x=x*10+9;
}

if(l<=x/2)
printf("%I64d",l*(x-l));
else if(l>x/2&&r<x/2)
printf("%I64d",x/2*(x-x/2));
else
printf("%I64d",r*(x-r));

return 0;
}
