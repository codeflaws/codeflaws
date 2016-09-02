#include<stdio.h>
int main(int argc, char *argv[])
{int r,g,b,t;
scanf("%d",&r);
scanf("%d",&g);
scanf("%d",&b);
r=r/2+r%2;
g=g/2+g%2;
b=b/2+b%2;
t=(r>g&&r>b)?(30+3*(r-1)):((g>=r&&g>b)?(31+3*(g-1)):(32+3*(b-1)));
printf("%d",t);
return 0;
}