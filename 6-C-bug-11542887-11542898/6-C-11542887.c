#include<stdio.h>

int main(int argc, char *argv[])
{
    long long int n,i,j,a,b,c=2,alice=1,bob=1;
    scanf("%lld",&n);
    int ara[n];
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    a=ara[0];b=ara[n-1];
    if(n==1){
        bob=0;b=0;
        c=1;
    }
    for(i=1,j=n-2;c<n;){
        c++;
        if(a<b){
            a+=ara[i];
            alice++;
            i++;
        }
        else{
            b+=ara[j];
            bob++;
            j--;
        }
    }
    printf("%lld %lld",alice,bob);
    return 0;
}
