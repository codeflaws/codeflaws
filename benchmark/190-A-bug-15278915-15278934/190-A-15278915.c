#include<stdio.h>
int main(int argc, char *argv[])
{int m,n,i,j,l;
scanf("%d %d",&n,&m);
if(n==0)
printf("Impossible");
else
{
if(m>0)
i=n+m-1;
else
    i=n+m;
l=m-n;
if(l>0)
j=n+l;
else
j=n;

printf("%d %d",j,i);

}

return 0;

}
