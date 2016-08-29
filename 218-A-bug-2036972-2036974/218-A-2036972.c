#include<stdio.h>

int main(int argc, char *argv[]){
    int n, k;
    int r[105];
    int kk;
    int i;
    scanf("%d %d", &n, &k);
    for(i=0; i<2*n+1; i++){
        scanf("%d", &r[i]);
    }
    kk = 0;
    for(i=1; i<2*n+1; i+=2){
        if(kk >= k)
            break;
        int y = r[i] - 1;
        if(y > r[i-1] && y > r[i+1]){
            r[i] = y;
            kk++;
        }
    }
    for(i=0; i<2*n+1; i++){
        printf("%d", r[i]);
        if(i<2*n)
            printf(" ");
        else
            printf("\n");
    }
return 0;
}