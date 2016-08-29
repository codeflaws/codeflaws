#include <stdio.h>

int n, k;
int a, b, c, d, arr[1010];

int main(int argc, char *argv[]) {
    scanf("%d %d %d %d %d %d", &n, &k, &a, &b, &c, &d);
    if(k<=n) puts("-1");
    else {
        int top=0;
        for(int i=1;i<=n;i++) {
            if(i==a || i==b || i==c || i==d) continue;
            else arr[top++]=i;
        }
        printf("%d %d ", a, c);
        for(int i=0;i<n-4;i++) printf("%d ", arr[i]);
        printf("%d %d\n", d, b);
        printf("%d %d ", c, a);
        for(int i=0;i<n-4;i++) printf("%d ", arr[i]);
        printf("%d %d", b, d);
    }
    return 0;
}
