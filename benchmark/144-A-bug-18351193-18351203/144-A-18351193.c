#include<stdio.h>

int main(int argc, char *argv[])
{
    int x, n, ans, i, min=1000, max=0, pos_min, pos_max;

    scanf("%d", &n);

    for(i=0; i<n; i++) {
        scanf("%d", &x);
        if(max<x) {
            max = x;
            pos_max = i;
        }
        if(min>=x) {
            min = x;
            pos_min = i;
        }
    }
    ans = pos_max + n-pos_min-1;
    if(pos_max>n-pos_min-1) ans--;

    printf("%d", ans);

    return 0;
}
