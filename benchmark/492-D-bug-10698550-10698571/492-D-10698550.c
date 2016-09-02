#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define EPS 1e-13

int main(int argc, char *argv[])
{
    int ans[2000000];
    long long int n , x, y, q, k = 1;
    long long int j = 1, s;
    double tX, tY;
    scanf("%I64d %I64d %I64d", &n, &x, &y);
    for (q = 0; q < (x + y); q++){
        tX = (double)j / x;
        tY = (double)k / y;
        if (fabs(tX - tY) < EPS){
            ans[q] = 2;
            k++;   q++;
            ans[q + 1] = 2;
            j++;
        }
        else if (tX < tY){
            ans[q] = 0;
            j++;
        }
        else if (tX > tY){
            ans[q] = 1;
            k++;
        }
    }
    for (; n > 0; n--){
        scanf("%I64d", &s);
        s--;
        s = s % (x + y);
        if (ans[s] == 0){
            printf("Vanya\n");
        }
        if (ans[s] == 1){
            printf("Vova\n");
        }
        if (ans[s] == 2){
            printf("Both\n");
        }
    }
    return 0;
}
