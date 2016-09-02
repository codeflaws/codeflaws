#include <stdio.h>

int main(int argc, char *argv[])
{
    long long T,S,q,counter=1;
    scanf("%lld %lld %lld",&T,&S,&q);
    S+=S*(q-1);
    q=S;
    while(S<T){
        S+=S*(q-1);
        q=S;
        counter++;
    }
    printf("%lld",counter);

return 0;
}
