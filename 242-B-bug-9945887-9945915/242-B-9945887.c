#include <stdio.h>

int max_i(int b[], int i, int j){
    if(b[i] > b[j]){
        return i;
    }else{
        return j;
    }
}

int min_i(int b[], int i, int j){
    if(b[i] < b[j]){
        return i;
    }else{
        return j;
    }
}

int main(int argc, char *argv[]){
    int i, j, k, l, m, n;

    scanf("%d", &n);

    int a[n], b[n];
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
        scanf("%d", &b[i]);
    }

    k = 0; j = 0;
    for(i = 1; i < n; i++){
        if(a[i] <= a[j] && b[k] <= b[i]){
            k = i;
            j = i;
        }else if(a[i] < a[j]){
            j = i;
        }else if(b[k] < b[i]){
            k = i;
        }else if(a[i] == a[j]){
            j = max_i(b, i, j);
        }else if(b[i] == b[k]){
            k = min_i(a, i, j);
        }
    }

    if(j == k){
        printf("%d", j + 1);
    }else{
        printf("-1\n");
    }

    return 0;
}
