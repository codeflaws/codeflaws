#include<stdio.h>
#include<math.h>
#include<string.h>
int main(int argc, char *argv[])
{
    int w,x,z;
    scanf("%d %d",&w,&x);
    if(x>=w) w = x;
    z = 7 - w;
    if(z==2 || z==3 || z==6)printf("%d/%d",1,6/z);
    else printf("%d/%d",z,6);

    return 0;
}
