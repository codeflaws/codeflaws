#include <stdio.h>
int main(int argc, char *argv[])
{
    long long int n,m,_mid;
    //scanf("%I64d %I64d",&n,&m);
    scanf("%lld %lld",&n,&m);
    _mid = n/2;
//    (_mid>m)? m+=1 : m-=1;
    if(_mid >=m) m+=1;
    else m-=1;
    if(m==0) m=2;

    //printf("%I64d",m);
    printf("%lld",m);

    return 0;
}
