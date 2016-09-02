#include <stdio.h>

int a[100000];
int main(int argc, char *argv[]){
    int i, j, k, l, m, n;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    j = 0;
    k = 0;
    for(i = 0; i < n; i++){
        if(a[i] == i){
            j++;
        }else if(k == 0 && a[a[i]] == i){
            a[i] = a[a[i]];
            k = 1;
            j += 2;
        }
    }

    if(k == 0){
        printf("%d\n", j + 1);
    }else{
        printf("%d\n", j);
    }

    return 0;
}
