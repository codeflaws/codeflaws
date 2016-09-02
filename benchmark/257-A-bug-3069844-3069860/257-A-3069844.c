#include <stdio.h>
int main(int argc, char *argv[])
{
    int n,m,k,i,j,t,sockets;
    scanf("%d %d %d",&n,&m,&k);
    int a[n];
    sockets = k;
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);
    sockets = sockets + a[i] -1;
    }
    if(sockets<m)
    {
        printf("-1");
        return(0);
    }
    /*SORTING THE ARRAY*/
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[j]>a[i])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    sockets = k;
    for(i=0;i<n;i++)
    {
     if(sockets>=m)
     {
         printf("%d",i);
         break;
     }
     sockets = sockets + a[i] -1;
    }
    return 0;
}
