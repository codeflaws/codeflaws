#include<stdio.h>
int main(int argc, char *argv[])
{
int l,d,v,g,r;
float q;

scanf("%d%d%d%d%d",&l,&d,&v,&g,&r);
q=(float) d/v;
while(q>(g+r))
q=q-(g+r);
if(q<g)
{
q=(float) l/v;
printf("%.8f",q);
return 0;
}
else
q=(float)l/v+(g+r)-q;
printf("%.8f",q);
return 0;
}
