#include <stdio.h>
int main(int argc, char *argv[])
{
    long long int l, r, i;
    scanf("%lld %lld", &l, &r);
    if(r-l==1)
        printf("-1\n");
    else if(r-l==2)
    {
        if(l%2==1)
            printf("-1\n");
        else 
            printf("%lld %lld %lld\n", l, l+1, r);
    }
    else
    {
        if(l%2==1)
            printf("%lld %lld %lld\n", l+1, l+2, l+3);
        else
            printf("%lld %lld %lld\n", l, l+1, l+2);
    }
    return 0;
}