#include <inttypes.h>
#include<stdio.h>
int main(int argc, char *argv[]){
    int64_t n,b=3;
    scanf("%lld",&n);
    while(n%b==0){
        b=b*3;
        if(n==b){printf("%d",1);return 0;}
    }
    printf("%d\n",n/b+1);
    return 0;
}
