#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    long long t , l , r , n , m;
    scanf("%lld" , &t);
    while(t--)
    {
        scanf("%lld%lld%lld" , &n , &l , &r);
        if(r < l)
        {
            printf("No\n");
            continue;
        }
        else
        {
            m = n / l;
            m * r >= n ? printf("YES\n") : printf("NO\n");
        }
    }
    return 0;
}
