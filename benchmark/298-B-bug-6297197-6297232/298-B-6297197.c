#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    long long t,x1,y1,x2,y2,i,counx=0,couny=0,X=0,Y=0,last=0;
    char mx,my;
    scanf("%lld %lld %lld %lld %lld",&t,&x1,&y1,&x2,&y2);
    char arr[t];
    scanf("%s",arr);
    if(x1>x2)
    {
        mx='W';
        counx=abs(x1-x2);
    }
    if(x2>x1)
    {
        mx='E';
        counx=abs(x2-x1);
    }
    if(y1>y2)
    {
        my='S';
        couny=abs(y1-y2);
    }
    if(y2>y1)
    {
        my='N';
        couny=abs(y2-y1);
    }
    for(i=0;i<t;i++)
    {
        if(arr[i]==mx && X+1<=counx)
        {
            X++;
            last=i;
        }
        if(arr[i]==my && X+1 <=couny)
        {
            Y++;
            last=i;
        }
    }
    if(X<counx || Y<couny)
    {
        printf("-1");
    }
    else
    {
        printf("%lld",(last+1));
    }
    return 0;
}
