#include <stdio.h>

/*long long pow(long long a)
{
    long long i,ans=1;
    while(a>0)
    {
        ans*=2;
        a--;
    }
    return ans;
}*/
int main(int argc, char *argv[])
{
    long long a,b,c=1;
    scanf("%I64d",&a);
    /*if(a%2!=0)
    {
        printf("%I64d",a*a);
    }
    else
    {
        b=a/2;
        if(b==1)
            b=0;
        while(b>0)
        {
            c*=3;
            b--;
        }
        printf("%I64d",c);
    }*/
    b=a-1;
    while(b>0)
    {
        c*=3;
        b--;
    }
    printf("%I64d",c%(1000000+3));
    return 0;
}
