#include <stdio.h>


int main(int argc, char *argv[])
{
    long long int n, k, cards, sum=0;
    scanf("%lld", &n);
    while(n--)
    {
        scanf("%lld", &cards);
        sum+=cards;
    }

    if(sum>=0) printf("%lld\n", ((sum) +k - 1)/k );
    else printf("%lld\n", ((-sum) +k - 1)/k );

    return 0;
}
