#include<stdio.h>
#include<math.h>
#include<string.h>
int main(int argc, char *argv[])
{
    long long int n,k,i,f,t,sum=-1000000000000000000,c;

    scanf("%lld %lld",&n,&k);
    for(i=1;i<=n;i++){
        scanf("%lld %lld",&f,&t);
        c = (t>k) ?  f - (t - k)  :  f;
        if(c>sum) sum = c;
    }
    printf("%lld",sum);

    return 0;
}
