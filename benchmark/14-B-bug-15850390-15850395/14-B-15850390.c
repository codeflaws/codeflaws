#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, j, k, n, x0, xmin, xmax, a, b;
    int dists[4];
    scanf("%d %d", &n, &x0);
    scanf("%d %d", &a, &b);
    if(a>b){
        xmax = a; xmin = b;
    }
    else{
        xmax = b; xmin = a;
    }
    for(i = 1; i < n; i++){
        scanf("%d %d", &a, &b);
        if(a<b){
            int temp = a; a = b; b = temp;
        }
        if(a < xmin || b > xmax){
            printf("-1");
            return 0;
        }
        else{
            dists[0] = a; dists[1] = b; dists[2] = xmin; dists[3] = xmax;
            for(j = 0; j < 4 - 1; j++)
                for(k = j+1; k < 4; k++){
                    if(dists[k]>dists[j]){
                        int temp = dists[k]; dists[k] = dists[j]; dists[j] = temp;
                    }
                }
            xmax = dists[1]; xmin = dists[2];
        }
    }
    if(x0>xmin && x0<xmax)
        putchar('0');
    else if(x0>xmax)
        printf("%d", x0-xmax);
    else
        printf("%d", xmin-x0);
    return 0;
}
