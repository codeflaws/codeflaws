#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<ctype.h>
#include<string.h>
long long primes[664580];
int v[10000001];
int pCount=0;
int main(int argc, char *argv[]) {
    memset(v, 0, sizeof(v));
    v[0] = v[1] = 1;
    long long i, j;
    // Sieve of Eratosthenes
    for (i = 2; i * i < 10000001; i++) {
        if (!v[i]) {
            for (j = i * i; j < 10000001; j += i) {
                v[j] = 1;
            }
        }
    }

    int index = 0;
    for (i = 2; i < 10000001; i++) {
        if (!v[i]) {
            primes[index++] = i;
        }
    }
    int n,k;
    scanf("%d%d",&n,&k);
    if(n/2==k){
        int i;
        for(i=0;i<n;i++)
            printf("%d ",primes[i]);
    }
    else if(n/2>k)
        printf("-1\n");
    else{
        int remainder=k-((n/2)-1);
        if(n%2==0){
            for(i=0;n!=2;i++){
            if(primes[i]==remainder)
                continue;
            else{
                printf("%d ",primes[i]);
                n--;
            }
        }
        printf("%d %d",remainder,remainder*2);
        }
        else{
            for(i=0;n!=3;i++){
            if(primes[i]==remainder)
                continue;
            else{
                printf("%d ",primes[i]);
                n--;
            }
        }
        printf("%d %d %d",remainder,remainder*2,primes[i+1]);

        }
    }
    return 0;
}
