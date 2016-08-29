#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
    int numCamellos,i,j;
    scanf("%d",&numCamellos);
    int x[numCamellos];
    int d[numCamellos];
    for(i=0;i<numCamellos;i++){
        scanf("%d%d",&x[i],&d[i]);
    }
    for(i=0;i<numCamellos;i++){
        for(j=0;j<numCamellos;j++){
            if(x[i]+d[i]==x[j] && x[j]+d[j]==x[i]){
                printf("SI");
                exit(0);
            }
        }
    }
    printf("NO");
    return 0;

}
