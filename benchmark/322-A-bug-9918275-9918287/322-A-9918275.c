#include <stdio.h>

int main(int argc, char *argv[]) {
    
    int n, m;
    scanf("%d %d", &n, &m);
    
    printf("%d\n", n + m - 1);
    int i;
    for(i = 1; i <= m; i++) {
        printf("%d %d\n", 1, i);
    }
    for(i = 2; i <= n; i++) {
        printf("%d %d\n", 2, 1);
    }
        
    return 0;
}
