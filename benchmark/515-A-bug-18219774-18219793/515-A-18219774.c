#include <stdio.h>
int main(int argc, char *argv[])
{
    long long int a,b,s;
    scanf("%lld%lld%lld",&a,&b,&s);
    if(a<0) a=-a;
    if(b<0) b=-b;
    if((s-(a+b))%2==0) printf("Yes");
    else printf("No");

    return 0;


}
