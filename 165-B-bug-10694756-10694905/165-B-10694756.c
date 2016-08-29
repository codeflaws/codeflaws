#include <stdio.h>
#include <stdlib.h>
int isright(long long v,long long k,long long n)
{
    long long sum=v;
    long  long value =v/k;
    while(value!=0)
    {
        sum+=value;
        value=value/k;
    }
    if (sum==n)
    {
        return 1;
    }

    else if (sum>n)
    {
        return 2;

    }

    return 0;
}




int main(int argc, char *argv[])
{

    long long  lines;
    long long low=0,mid=0,value,min=1,high;
    int k;
  scanf("%lld",& lines);
    scanf("%d",&k);
    high=lines;
    while(low<high)
    {
        mid=(low+high)/2;
        value=isright(mid,k,lines);
        if(value==1)
        {
            min=mid;
            break;
        }
        else if (value==0)
        {
            low=mid+1;
        }
        else if (value==2)
        {
            min=mid;
            high=mid;
        }

    }
    printf("%lld",min);
    return 0;
}


