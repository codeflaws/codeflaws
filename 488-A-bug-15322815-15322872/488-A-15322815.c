#include<stdio.h>

int main(int argc, char *argv[])
{
    long long int a,b,c,e=0,f=0,i;

    scanf("%lld",&a);

    a=a+1;

    for(i=a;i<=8888888888;i++)
    {
        b=i;

        while(b)
        {
            c=b%10;

            if(c==8){
                f++;
                break;
            }

            b=b/10;
        }
        e++;

        if(f>0) break;

    }
    printf("%lld",e);

    return 0;
}
