#include <stdio.h>

int main(int argc, char *argv[])
{
    int n;
    double ans,m,p;
    ans=m=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lf",&p);
        ans+=p*(1+2*m);
        m=p*(m+1);
    }
    printf("%.10f\n",ans);
    return 0;
}
