#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(int argc, char *argv[])
{
    int n, k;
    scanf("%d %d", &n, &k);
    int i = 0, j;
    if (n*n < k)
        printf("no solution\n");

    else
    {
        for(j = 0; j < n; j++)
        {
            printf("%d %d\n", i, j);
        }

    }
    return 0;
}

