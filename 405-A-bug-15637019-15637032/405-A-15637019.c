#include<stdio.h>

int main(int argc, char *argv[]){
    int ara[110],n,i,j,t;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(ara[i]>ara[j+1]){
                t=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=t;
            }
        }
    }
    for(i=0;i<n;i++) printf("%d ",ara[i]);
return 0;
}
