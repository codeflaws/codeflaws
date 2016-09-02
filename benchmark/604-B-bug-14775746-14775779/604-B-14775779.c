#include <stdio.h>
int main(int argc, char *argv[])
{
    int max,i,k,n,c,a[100001];
    scanf ("%d %d",&n,&k);
    for (i=1;i<=n;i++)
    {
        scanf ("%d",&a[i]);
    }
    max=a[n];
    c=n-k;
    for (i=1;i<=c;i++)
    {
        if (a[i]+a[2*c-i+1]>max)
        {
            max=a[i]+a[2*c-i+1];
        }
    }
    printf ("%d",max);
return 0;
}
