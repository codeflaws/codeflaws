#include<stdio.h>

int main(int argc, char *argv[])
{
    unsigned long long int s,w,h,m,n;
    scanf("%I64u%I64u",&w,&h);
    m=w/2;n=h/2;
    if (w<2 || h<2) printf("0");
    else 
        {
            s=n*n*m*m;
            printf("%I64u",s);
        }
 return(0);
}