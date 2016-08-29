#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
    double r,g,b,k,t=0,x;
    scanf("%lf%lf%lf",&r,&g,&b);
    if(r<g)    {
        k=r;
        r=g;
        g=k;
    }
    if(g<b)    {
        k=g;
        g=b;
        b=k;
    }
    if(r<g)    {
        k=r;
        r=g;
        g=k;
    }

    if((r-b)/(g-b)<=2)    {
        r-=b;
        g-=b;
        t+=b;
        t+=r-g;
        r=2*g-r;
        t+=2*floor(r/3);
    }
    else    {

         x=ceil((r+b-2*g)/3);
         if(x>b)    {
            t+=b+g;
         }
         else    {
            t+=x;
            r-=2*x;
            b-=x;
            r-=b;
            g-=b;
            t+=b;
            t+=r-g;
            r=2*g-r;
            t+=r-ceil(r/3);
         }
    }
    printf("%.0lf\n",t);
    return 0;
}
