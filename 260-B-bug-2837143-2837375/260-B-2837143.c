#include <stdio.h>
#include <string.h>

int d[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(int argc, char *argv[])
{
    int n, p, q, r, ans = 0, i, j, k;
    int a[3][12][31] = {0};
    char s[100001];
    
    scanf("%s", s);
    
    n = strlen(s);
    
    for (i = 0; i + 9 < n; i++) {
        if (s[i + 2] == '-' && s[i + 5] == '-') {
            int x, y, z;
            
            for (j = 0; j < 10; j++) {
                if (j == 2 || j == 5) continue;
                
                if (s[i + j] == '-') break;
            }
            
            if (j < 10) continue;
            
            x = (s[i] - '0') * 10 + (s[i + 1] - '0');
            y = (s[i + 3] - '0') * 10 + (s[i + 4] - '0');
            z = (s[i + 6] - '0') * 1000 + (s[i + 7] - '0') * 100 + (s[i + 8] - '0') * 10 + (s[i + 9] - '0');
            
            if (y > 12 || x > d[y - 1] || z < 2013 || z > 2015) continue;
            
            a[z - 2013][y - 1][x - 1]++;
        }
    }
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 12; j++) {
            for (k = 0; k < d[j]; k++) {
                if (a[i][j][k] > ans) {
                    ans = a[i][j][k];
                    p = i;
                    q = j;
                    r = k;
                }
            }
        }
    }
    
    printf("%2d-%2d-%d\n", r + 1, q + 1, p + 2013);
    
    return 0;
}
