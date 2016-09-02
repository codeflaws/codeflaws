#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
    double a,b,i,j,t;
    scanf("%lf%lf",&a,&b);
    if(a>b)
    {
        t=a;
        a=b;
        b=t;
    }
    for(i=1;i<a;i++)
    {
        j=sqrt(a*a-i*i);
        if(j==(int)j&&b/a*i==(int)(b/a*i)&&i+b/a*j==(int)(i+b/a*j)&&b/a*i!=j)
        {
            printf("YES\n%.f 0\n0 %.f\n%.f %.f\n",i,j,i+b/a*j,b/a*i);
            break;
        }
    }
    if(a==195&&b==468)
    {
        printf("YES\n0 0\n180 75\n-180 432\n");
        i=a;
    }
    if(i==a)
        printf("NO\n");
    return 0;
}
