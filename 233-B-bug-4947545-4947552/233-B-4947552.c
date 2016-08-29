#include<stdio.h>
#include<math.h>
int digits(long long a)
{
    int i=0;
    while(a>0)
    {
        i+=(a%10);
        a/=10;
    }
    return i;
}
int main(int argc, char *argv[])
{
    long long i,j,k,l,min=1000000000;
    scanf("%I64d",&i);
    for(j=1;j<=90;j++)
    {
        k=sqrt(j*j+4*i);
        if(k*k!=(j*j+4*i))
        continue;
        if(k-j>0)
        {
            if((k-j)%2==0)
            {
                if(digits((k-j)/2)!=j)
                continue;
                l=(k-j)/2;
                if(min>l)
                min=l;
            }
        }
    }
    if(min==1000000000)
    min=-1;
    printf("%I64d",min);
    return 0;
}