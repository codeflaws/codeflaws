#include<stdio.h>

int main(int argc, char *argv[])
{
    long long int n,ck=1;;
    scanf("%lld",&n);

    while(n!=0)
    {
        if(n%10==4)
        {
            n=n/10;
            if(n%10==4)
            {
                n=n/10;
                if(n%10==1) n=n/10;
                else
                {
                    printf("NO");
                    ck=0;
                    break;
                }
            }
            if(n%10==1)  n=n/10;
            else
            {
                printf("NO");
                ck=0;
                break;
            }
        }
        else if(n%10==1) n=n/10;
        else
        {
            printf("NO");
            ck=0;
            break;
        }
    }
    if(ck==1) printf("YES");
    return 0;
}
