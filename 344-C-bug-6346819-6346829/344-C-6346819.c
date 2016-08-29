#include <stdio.h>
int main(int argc, char *argv[])
{
    long long a,b,i,k=0;
    scanf("%I64d %I64d",&a,&b);
    if (a==b)
        k=1;
    else
        if (a==1)
        k=b;
    else
        {
            while (a!=1)
            {
                if (a>b)
                {
                    a=a%b;
                    k+=a;
                }
                else
                {
                    i=a;
                    a=b;
                    b=i;
                }
            }
            k+=b;
        }
    printf("%I64d",k);
    return 0;
}
