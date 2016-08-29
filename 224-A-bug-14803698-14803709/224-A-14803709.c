#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[])
{
    double s1,s2,s3,a,b,c,res;
    scanf("%lf %lf %lf",&s1,&s2,&s3);
    a=sqrt((s1*s3)/s2);
    b=sqrt((s1*s2)/s3);
    c=sqrt((s2*s3)/s1);
    res=4.0*(a+b+c);
    printf("%d\n",(int)res);
    return 0;
}