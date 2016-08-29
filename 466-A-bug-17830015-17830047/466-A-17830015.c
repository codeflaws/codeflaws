#include <stdio.h>
int main(int argc, char *argv[])
{
    int n, m, a, b;
    scanf("%d %d %d %d", &n, &m, &a, &b);
    int k=n/m;
    int l=n%m;
    int ans;
    //printf("k=%d l=%d\n", k, l);
    if(m>n)
    {
        if(a<b)
            ans=a;
        else
            ans=b;
    }
    else if(b*k<a*k*m)
    {
        if(a*l<b)
            ans=b*k+a*l;
        else
            ans=b*(k+1);
    }
    else
        ans=a*n;
    printf("%d\n", ans);
    return 0;
}