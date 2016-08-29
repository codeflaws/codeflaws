#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, m, a[51][51];
    int total=n*m;
    int i, j, k;
    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &k);
            if(k==1)
            {
                if(i==0 || i==n-1)
                {
                    printf("2");
                    return 0;
                }
                if(j==0 || j==n-1)
                {
                    printf("2");
                    return 0;
                }
            }
        }
    }
    printf("4");
    return 0;
}