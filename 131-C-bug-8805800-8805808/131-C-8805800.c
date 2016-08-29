#include <stdio.h>
#include <stdlib.h>

unsigned long long combinaison (short n, short m){
    int i;
    unsigned long long c=1;
    short aux=n;
    if (n<m) return 0;
    else{
        if (!(n==0 && m==0)){
            for (i=1;i<=m;i++){
                c*=aux;
                c/=i;
                aux--;
            }
        }
        return c;
    }
}

int main(int argc, char *argv[])
{
    short n,m,t;
    scanf ("%hd%hd%hd", &n, &m, &t);
    unsigned long long w=0;
    short i;
    for (i=4;i<=t;i++){
        if (t-i>=1){
            printf("%llu\t%llu\t%llu\n", combinaison(n,i),combinaison(m,t-i),w);
            w+=combinaison(n,i)*combinaison(m,t-i);
        }
    }
    printf("%llu", w);
    return 0;
}
