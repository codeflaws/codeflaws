#include <stdio.h>

int cmp(void *a, void *b){
    return(*(int*)a - *(int*)b);
}

int main(int argc, char *argv[]){
    int n, i, time;
    int j = 1;
    int max = 0;
    scanf("%d", &n);
    int t[n];
    for(i=0;i<n;i++) scanf("%d", &t[i]);
    scanf("%d", &time);
    qsort(t, n, sizeof(int), cmp);
    for(i=0;i<n-1;i++){
        while(t[i+j]-t[i] <= time && j+i<n){j++;}
        if(max<j) max = j;
        j = 1;
    }
    printf("%d", max);
    return 0;
}
