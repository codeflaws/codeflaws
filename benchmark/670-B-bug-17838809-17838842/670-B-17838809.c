#include<stdio.h>

int main(int argc, char *argv[])
{
    long long int n, k, r, i, s;
    scanf("%lld", &n);
    long long int ara[n];
    scanf("%lld", &k);
    for(i = 0; i < n; i++)
        scanf("%lld", &ara[i]);
    for(r = 1; (r*(r+1))/2 <= k; r++);
    r--;
    printf("%lld", ara[k -(r*(r+1))/2-1]);

    return 0;
}
