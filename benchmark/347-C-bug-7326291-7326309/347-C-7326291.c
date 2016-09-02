#include<stdio.h>
int a[105];
int gcd(int a,int b)
{
    if(b==0) return a;
    else return (b,a%b);
}
int main(int argc, char *argv[])
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int g=a[0],mx=a[0];
    for(i=1;i<n;i++)
    {
        g=gcd(g,a[i]);
        if(a[i]>mx) mx=a[i];
    }
    int turns=mx/g;
    if((turns-n)&1) puts("Alice");
    else puts("Bob");
    return 0;
}