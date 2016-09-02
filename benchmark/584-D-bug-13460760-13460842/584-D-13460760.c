#include <stdio.h>
#include <math.h>

int check(long long i){
    int j,root;
    root=sqrt(i)+1;
    if(i<4){
        return 1;
    }
    for(j=2;j<root;j++){
        if(i%j==0)return 0;
    }
    return 1;
}

long long p;

int main(int argc, char *argv[])
{
    scanf("%lld",&p);
    if(p==3){
        printf("1\n3");
        return 0;
    }
    if(p==5){
        printf("1\n5");
        return 0;
    }
    if(p==7){
        printf("1\n7");
        return 0;
    }
    long long int i;
    printf("3\n3 ");
    p=p-3;
    for(i=2;i<p/2;i++){
        if(check(i)==1 && check(p-i)==1){
            printf("%lld %lld",i,p-i);
            return 0;
        }
    }
    return 0;
}
