#include<stdio.h>
int main(int argc, char *argv[]){
    int i,k,n,r;
    scanf("%d %d",&n,&k);
    r=k;
    while(n--){
        scanf("%d",&i);
        r+= i>k;
    }
    printf("%d",r);
    return 0;
}