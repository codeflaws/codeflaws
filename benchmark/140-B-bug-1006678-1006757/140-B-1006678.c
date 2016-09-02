#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a[301][301],i,j,k,f,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=1; j<=n; j++)
    {
        scanf("%d",&a[0][j]);
    }
    for(i=1; i<=n; i++)
    {
        j=1;
        f=0;
        while(1)
        {
            f=0;
            if(a[i][j]!=i)
            {
                k=1;
                while(1)
                {
                    if(a[0][k]==a[i][j])
                    {
                        f=1;
                        printf("%d",a[i][j]);
                    }
                    else if((a[0][k]<a[i][j])&&(a[0][k]!=i))
                    {
                        f=2;
                    }
                    if(f>0)
                    {
                        break;
                    }
                    k++;
                }
            }
            else
            {
                j++;
            }
            if(f==2)
            {
                f=0;
                j++;
            }
            if(f==1)
            {
                break;
            }

        }
    }

    return 0;
}
