#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n,min[3]={0},max[3]={0},i,degree[3]={0};
    scanf("%d",&n);
    for(i=0;i<3;i++){
        scanf("%d%d",&min[i],&max[i]);
        degree[i] = min[i];
        n = n-min[i];
    }
    i=0;
    while(n>0){
        if(degree[i]<max[i]){
            degree[i] = degree[i]+1;
            n = n-1;
        }
        else
            i++;
    }
    printf("%d %d %d\n",degree[0],degree[1],degree[2]);

}