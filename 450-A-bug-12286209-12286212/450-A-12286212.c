#include <stdio.h>

int main(int argc, char *argv[]){

    int n;
    int m;
    scanf("%d %d", &n, &m);

    int i;
    int storage[n];

    for(i=0; i<n; i++){
        scanf("%d", &storage[i]);
    }

    int candy[n];
    for(i=0; i<n; i++){
        candy[i]=0;
    }
    int counter=0;
    if(n==1){
        printf("1");
        return 0;
    }
    for(i=0; ; ){
        candy[i]=candy[i]+m;
        if(storage[i]!=-1 && candy[i]>=storage[i]){
            storage[i]=-1;
            counter++;
        }
        if(counter==n-1){
            break;
        }
        if(i==n-1){
            i=0;
        }
        else{
            i++;
        }
    }
    for(i=0; i<n; i++){
        if(storage[i]!=-1){
            printf("%d", i+1);
            break;
        }
    }

    return 0;
}