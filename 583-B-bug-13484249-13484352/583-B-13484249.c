#include <stdio.h>
#include <math.h>

int i, n, t, x=-1, k=0, a[1005];
int main(int argc, char *argv[])
    {
     scanf("%d", &n );
     for(i=0; i<n; i++)
        {
        scanf("%d", &a[i]);
        }

     i=-1;
     while (k<n)
        {
        i++;
        x++;
        while (i<n)
            {
            if (a[i]>=0)
                {
                if (k>=a[i] || a[i]==0)
                    {
                    k++;
                    a[i]=-1;
                    }
                }

            i++;
            }

        if (i==n && k!=n)
        {
        i--;
        x++;
        while (i>=0)
            {
            if (a[i]>=0)
                {
                if (k==a[i])
                    {
                    k++;
                    a[i]=-1;
                    }
                }
            i--;
            }
        }

        }

    printf("%d", x);

    return 0;
    }
