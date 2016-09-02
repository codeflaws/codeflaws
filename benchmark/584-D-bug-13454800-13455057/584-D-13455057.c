#include <stdio.h>
#include <stdlib.h>
int prime(int v)
{
    int i;
    if (v<2) return 0;
    if (v<4) return 1;
    for (i=2;i<=sqrt((float)v);i++)
        if (v%i==0) return 0;
    return 1;
}
int main(int argc, char *argv[])
{
    int j,n,i,a[10],sl;
    scanf("%d",&n);
    if (prime(n)>0) printf("1\n%d",n);
    else
    {
        for (i=n-2;i>1;i--)
            if (prime(i)>0)
        {
            for (j=n-i;j>1;j--)
                if (prime (j)>0)
            {
                if (i+j==n)
                {
                    printf("2\n%d %d",i,j);
                    return 0;
                }
                if (prime(n-i-j)>0)
                {
                    printf("3\n%d %d %d",i,j,n-i-j);
                    return 0;
                }
            }
        }
    }
    return 0;
}
