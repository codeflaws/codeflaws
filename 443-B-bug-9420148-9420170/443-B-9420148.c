#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    int i, j, k, l, m, n;
    char a[201];

    scanf("%s", a);
    scanf("%d", &j);

    n = strlen(a);
    for(i = (n + j) / 2; i >= 1; i--){
        l = 0;
        for(k = 0; k <= n + j - i; k++){
            if(k + i < n && a[k] != a[k + i]){
                l = -1;
            }
            l++;
            if(l == i){
                break;
            }
        }
        if(l == i){
            break;
        }
    }
    printf("%d\n", l * 2);
    return 0;
}
