/* Problem: k-Tree */
/* Solver: Gusztav Szmolik */

#include <stdio.h>

unsigned int t[100][100];

int main(int argc, char *argv[])
    {
    unsigned short n;
    unsigned short k;
    unsigned short d;
    unsigned short i;
    unsigned short j;
    unsigned int a;
    unsigned int b;
    
    if (scanf("%hu %hu %hu",&n,&k,&d) != 3)
        return -1;
    if (n < 1 || n > 100 || k < 1 || k > 100 || d < 1 || d > k)
        return -1;
    for (i = 0; i < n; i++)
        for (j = 0; j < k; j++)
            {
            if (!i || !j)
                t[i][j] = 1;
            else if (i == j)
                t[i][j] = 2*t[i-1][j]%1000000007;
            else if (j > i)
                t[i][j] = t[i][j-1];
            else if (i == j+1)
                t[i][j] = (2*t[i-1][j]-1)%1000000007;
            else
                {
                a = 2*t[i-1][j];
                b = t[i-j-2][j];
                t[i][j] = (a >= b ? a-b : 1000000007-(b-a));
                }
            }
    a = t[n-1][k-1];
    b = (d > 1 ? t[n-1][d-2] : 0);
    printf ("%u\n",(a >= b ? a-b : 1000000007-(b-a)));
    return 0;
    }
