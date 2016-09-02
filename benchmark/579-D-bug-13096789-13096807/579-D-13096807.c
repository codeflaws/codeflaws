#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
//||
//\n
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)b - *(int*)a );
}

//  qsort(values, 5, sizeof(int), cmpfunc);
long long n, k, x, ar[200009] = {0}, i, j, m, a, b, mul = 1;
long long pre[200009]= {0}, post[200009] = {0}, ans = 0;

int main(int argc, char *argv[])
{

    scanf("%lld %lld %lld", &n, &k, &x);

    for (i = 1; i <= n; i++)
    {
        scanf("%lld", &ar[i]);
    }

    for (i = 1; i <=  k; i++)
    {
        mul *= x;
    }

    for (i = 1; i <= n; i++)
    {
        pre[i] = pre[i-1] | ar[i];
        post[n+1-i] = post[n+2-i] | ar[n+1-i];
    }

    for (i = 1; i <= n; i++)
    {
        if ( (pre[i-1] | (mul * ar[i]) | post[i+1]) > ans)
        {
            ans = pre[i-1] | (mul * ar[i]) | post[i+1];
        }
    }

    printf("%lld", ans);

    return 0;
}
