#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long long int answers[103];
long long int clicks[103];
int main(int argc, char *argv[])
{
    int n, i, click = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%I64d", &answers[i]);
    for(i = 0; i < n; i++)
    {
        clicks[i] = answers[i] + i;
        if(i > 0)
            clicks[i] = clicks[i] + clicks[i - 1];
    }
    printf("%I64d\n", clicks[n - 1]);
    return 0;
}
