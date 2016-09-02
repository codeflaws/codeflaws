#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

long long judge(int k);
void output(int k);
long long a, b;

int main(int argc, char *argv[])
{
    int i, x;
    long long ans, t;
    
    while (scanf("%lld%lld",&a,&b) != EOF) {
        if (!a) {
            printf("%lld\n", -b*b);
            for (i=0; i<b; i++)
                putchar('x');
            putchar('\n');
            continue;
        }
        ans = a*a-(b/2)*(b/2);
        if (b%2)
            ans -= (b/2+1)*(b/2+1);
        else
            ans -= b*b/4;
        x = 0;
        for (i=1; i<a; i++)
            if ((t=judge(i) > ans)) {
                ans = judge(i);
                x = i;
            }
        printf("%lld\n", ans);
        output(x);
    }
    
    return 0;
}

long long judge(int k)
{
    long long sum, t, x;

    sum = (a-k)*(a-k);
    t = b%(k+2);
    x = b/(k+2);
    sum -= (k+2-t)*x*x;
    sum -= t*(x+1)*(x+1);
    sum += k;

    return sum;
}


void output(int k)
{
    int t, x, i;

    t = b%(k+2);
    x = b/(k+2);
    for (i=0; i<x; i++)
        putchar('x');
    if (t) {
        putchar('x');
        t--;
    }   
    for (i=0; i<a-k; i++)
        putchar('o');
    while (k--) {
        for (i=0; i<x; i++)
            putchar('x');
        if (t) {
            putchar('x');
            t--;
        }   
        putchar('o');
    }
    for (i=0; i<x; i++)
        putchar('x');
    if (t) {
        putchar('x');
        t--;
    }   
    putchar('\n');

    return;
}
