#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
     int b1,c;
     int b,a,h,r;
    scanf("%d %d",&r,&h);
    b=2*(h/r);
    //printf("%lld\n",b);
    a=h%r;
    b1=ceil(0.85*r);

    if(r>1&&h>1)
    if(a>=b1)
    {
        b=b+3;
        printf("%d\n",b);
        return 0;

    }
    c=ceil(0.5*r);
   // printf("%d\n",c);

    if(a>=c)
    b+=2;
    else
    b++;
    printf("%d\n",b);
    return 0;
}
