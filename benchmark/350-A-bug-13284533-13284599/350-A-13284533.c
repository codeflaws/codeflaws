#include<stdio.h>

int main(int argc, char *argv[]){
    int small, large, wsmall, n ,m;
    int arr[101] = {0}, brr[101] = {0}, i, j;
    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++){
        scanf("%d", &j);
        arr[j]++;
    }
    for(i=0; i<m; i++){
        scanf("%d", &j);
        brr[j]++;
    }
    for(i=0; i<101; i++){
        if(arr[i]){
            small = i;
            break;
        }
    }
    for(i=100; i>=0; i--){
        if(arr[i]){
            large = i;
            break;
        }
    }
    for(i=0; i<101; i++){
        if(brr[i]){
            wsmall = i;
            break;
        }
    }
   if(large > wsmall || (2 * small) >= wsmall){
        printf("-1");
    }
    else{
        if(large > (2 * small)){
            printf("%d", large);
        }
        else{
            printf("%d", (2 * small));
        }
    }
return 0;
}
