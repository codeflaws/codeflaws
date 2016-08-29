#include<stdio.h>

int main(int argc, char *argv[])
{
        long long a,b,i,sum=0;
        scanf("%lld %lld", &a, &b);
        while(1)
        {
                sum+=a/b;
                if(a%b==0)break;
                else
                {
                        i=a%b;
                        a=b;
                        b=i;
                }
        }
        printf("%d",sum);
        return 0;
}
