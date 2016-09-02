#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int n,m,i,j;
    int a[105];
    int b[105];


    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=0;
    }

    for(i=0;i<m;i++)
    {
        for(j=a[i];j<=n;j++)
        {
            if(b[j-1]==0)
            {
                b[j-1]=a[i];
            }

        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }

    return 0;
}
