#include <stdio.h>



int main(int argc, char *argv[]){
    int n, m;
    scanf("%d %d", &n, &m);
    int x;
    int a[m+1];
    int i, j, y;
    for (i = 1; i <= m; i++)
        a[m] = 0;
    for (i = 0; i < n; i++){
        scanf("%d", &x);
        for (j = 1; j <= x; j++)
        {
            scanf("%d", &y);
            a[y] = 1;
        }
    }

    int dem = 0;
    for (i = 1; i <= m; i++)
        if (a[i]) dem++;
    if (dem == m) printf("YES"); else printf("NO");
    return 0;
}
