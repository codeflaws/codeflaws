#include <stdio.h>
int a[2000][2000] = {0};
int main(int argc, char *argv[])
{
    int i, j, k, n, kk;
    
    scanf ("%d%d", &n, &k);
    //a[1][k] = n;
    for (i = 1; i <= n; i++) {
        a[i][k] = n/i ;
        a[n + 1][k] = a[n + 1][k] + n/i;
        a[n + 1][k] = a[n + 1][k] % 1000000007;
    }
    
    for (j = k - 1; j >= 2; j--) {
        for (i = 1; i <= n; i++) {
            if (i == 1)
            a[i][j] = a[n + 1][j + 1];
            else {
                 kk = 1;
            while (i * kk <= n) {
                  a[i][j] = a[i][j] + a[i * kk][j + 1];
                  a[i][j] = a[i][j] % 1000000007;
                  kk++;
                  }}
            a[n + 1][j] = a[n + 1][j] + a[i][j];
            a[n + 1][j] = a[n + 1][j] % 1000000007;
        }
    }
    /*for (j = 1; j <= n + 1; j++) {
        for (i = 2; i <= k; i++) {
    printf ("%d ", a[j][i]);
}*/
if (k == 1)
printf ("%d\n", n);
else
printf ("%d\n", a[n + 1][2]);
//printf ("\n");

    
    return 0;
}