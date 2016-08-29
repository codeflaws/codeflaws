#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    long long int n,sum=0;
    int i;
    scanf("%lld",&n);
    for(i=0;sum<=n;i++){
        sum=sum+5*pow(2,i);
    }
    i--;

    if(n<=sum && n>sum-pow(2,i)){
        printf("Howard\n");
    }
    else if(n<=sum-pow(2,i) && n>sum-pow(2,i)*2){
        printf("Rajesh\n");
    }
    else if(n<=sum-pow(2,i)*2 && n>sum-pow(2,i)*3){
        printf("Penny\n");
    }
    else if(n<=sum-pow(2,i)*3 && n>sum-pow(2,i)*4){
        printf("Leonard\n");
    }
    else if(n<=sum-pow(2,i)*4 && n>sum-pow(2,i)*5){
        printf("Sheldon\n");
    }

    return 0;
}
