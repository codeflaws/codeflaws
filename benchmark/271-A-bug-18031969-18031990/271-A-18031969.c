#include <stdio.h>

int main(int argc, char *argv[])
{
    int year,a,b,c,d;
    scanf("%d",&year);
    a = year/1000;
    b = year/100 -(a*10);
    d = year % 10;
    c = ((year%100)-d)/10;
    year+=1;
    for(;year<9000;++year)
    {
        a = year/1000;
        b = year/100 -(a*10);
        d = year % 10;
        c = ((year%100)-d)/10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            printf("%d",year);
            break;
        }
    }
    return 0;
}
