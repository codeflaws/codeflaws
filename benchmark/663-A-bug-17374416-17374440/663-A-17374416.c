#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define clr(ar) memset(ar, 0, sizeof(ar))
#define read() freopen("lol.txt", "r", stdin)

char str[100], sign[100];
int n, p, m, ar[100], pos[100], neg[100];

int main(int argc, char *argv[]){
    int i, j, k, l, d, x, minval, maxval;

    while (!feof(stdin)){
        l = 0, p = 0, n = 0, k = 0;
        while (scanf("%s", str) != EOF){
            if (str[0] == '+') l = 0;
            else if (str[0] == '-') l = 1;
            else if (str[0] == '=') l = 2;
            else{
                if (l == 2){
                    m = atoi(str);
                    break;
                }
                else if (l == 1) sign[k] = '-', neg[n++] = k++;
                else sign[k] = '+', pos[p++] = k++;
            }
        }
        if (feof(stdin)) break;

        minval = p - (n * m), maxval = (p * m) - n;
        if (m >= minval && m <= maxval){
            puts("Possible");
            k = p, l = n, d = m;

            for (i = 0; i < k; i++){
                for (j = 1; j <= d; j++){
                    minval = (p - 1) - (n * d), maxval = ((p - 1) * d) - n;
                    if ((m - j) >= minval && (m - j) <= maxval){
                        ar[pos[i]] = j, p--, m -= j;
                        break;
                    }
                }
            }

            for (i = 0; i < l; i++){
                for (j = 1; j <= d; j++){
                    minval = ((n - 1) * d), maxval = -(n - 1);
                    if ((m + j) >= minval && (m + j) <= maxval){
                        ar[neg[i]] = j, n--, m += j;
                        break;
                    }
                }
            }

            for (i = 0; i < (k + l); i++){
                if (i) printf(" %c ", sign[i]);
                printf("%d", ar[i]);
            }
            printf(" = %d\n", d);
        }
        else puts("Impossible");
    }
    return 0;
}
