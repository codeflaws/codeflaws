#include <stdio.h>
#include <math.h>

int a[2],b[2],c[2];

int Solving()
{
    int d=a[0]*b[1]-a[1]*b[0];
    if(d) return 1;
    d=a[0]*c[1]-a[1]*c[0];
    if(d) return 0;
    d=b[0]*c[1]-b[1]*c[0];
    if(d) return 0;
    return -1;
}

int main(int argc, char *argv[])
{
    int i;
    for(i=0;i<2;i++) scanf("%d %d %d",a+i,b+i,c+i);
    printf("%d\n",Solving());
    return 0;
}