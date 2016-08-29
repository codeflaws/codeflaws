#include <stdio.h>
int main(int argc, char *argv[])
{
    int n, m, i, a[101], b[101];
    scanf("%d %d", &n, &m);
    for(i=0; i<=n; i++)
        scanf("%d", &a[i]);
    for(i=0; i<=m; i++)
        scanf("%d", &b[i]);
    if(n>m)
    {
        int prod=a[0]*b[0];
        if(prod>0)
            printf("Infinity\n");
        else
            printf("-Infinity\n");
    }
    else if(n==m)
    {
        //printf("a[0]=%d b[0]=%d\n", a[0], b[0]);
        if((a[0]<0 && b[0]>0) || (a[0]>0 && b[0]<0))
            printf("-");
        a[0]=abs(a[0]);
        b[0]=abs(b[0]);
        int min=a[0];
        if(b[0]<min)
            min=b[0];
        //printf("a[0]=%d b[0]=%d\n", a[0], b[0]);
        for(i=2; i<=min; i++)
        {
            if(a[0]%i==0 && b[0]%i==0)
            {
                a[0]/=i;
                b[0]/=i;
            }
        }
        printf("%d/%d\n", a[0], b[0]);
    }
    else if(n<m)
    {
        printf("0/1\n");
    }
    return 0;
}