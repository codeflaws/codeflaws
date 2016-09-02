#include <stdio.h>
#define maxn 1000
long a,b,c;
int main(int argc, char *argv[]) 
{
    int t;
    scanf("%ld %ld %ld",&a,&b,&c);
    double ans = 1.0 * c / b * (a - b);
    t = (int) ans;
    if (ans == t) printf("%d",t);
    else printf("%d",t+1);

}
