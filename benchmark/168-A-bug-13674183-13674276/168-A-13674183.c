#include <stdio.h>
int main(int argc, char *argv[])
{
float a,n,x,y;

scanf("%f %f %f",&n,&x,&y);
a=(y*n/100)-x;
int p=a;
if(a-p>0)
{
p=a+1;
}
printf("%d",p);
return 0;
}
