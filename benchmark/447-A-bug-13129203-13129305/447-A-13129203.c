#include <stdio.h>

int main(int argc, char *argv[])
{
    int p, n, i, j, x, flag=0;
    long long int a[300];
    scanf("%d %d", &p, &n);
    for(i=0;i<n;i++)
    {
        scanf("%lld", &a[i]);
        for(j=0;j<i;j++)
        {
            if(flag==1)
                continue;
            if(a[i]%10==a[j]%10)
            {
                x=i+1;
                flag=1;
            }
        }
    }
    if(flag==1)
        printf("%d", x);
    else
        puts("-1");

    return 0;
}
