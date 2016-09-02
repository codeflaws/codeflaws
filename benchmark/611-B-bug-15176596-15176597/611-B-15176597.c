#include<stdio.h>
long long int v[2000];
int main(int argc, char *argv[]){
    int l,i,r,j;
    long long int x,y;
    scanf("%lld %lld",&x,&y);
    for(i=l=0;i<60;i++){
        for(j=i-1;~j;j--){
            for(r=0;r<=i;r++){
                v[l]|=(long long int)(j!=r)<<(r);
            }
            l++;
        }
    }
    i=r=0;
    while(v[i]<x){
        i++;
    }
    while(v[i]<=y){
        i++;
        r++;
    }
    printf("%d",r);
    return 0;
}
