#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

long long p,q,i;
int a[3],c;
int main(int argc, char *argv[]){
    scanf("%lld",&q);
    p=q;

    for(i=2;i*i<=p&&c<3;i++){
        while(q%i==0){
            q/=i; a[c++]=i;
        }
    }
    c+=q>1;
    if(c>2){
        printf("1\n%lld\n",(long long)a[0]*(long long)a[1]);
        return 0;
    }
    if(p==q){
        puts("1\n0");
        return 0;
    }
    puts("2");
    return 0;
}

