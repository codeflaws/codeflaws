#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    int i,n,a,b,x[150],y[150],z[150];
    scanf("%d%d%d",&n,&a,&b);
         for(i=0; i<n; i++)
    {
       z[i]=2;

    }
    for(i=0; i<a; i++)
    {
        scanf("%d",&x[i]);
        z[x[i]-1]=1;
    }

        for(i=0; i<b; i++)
    {
        scanf("%d",&y[i]);

    }
         for(i=0; i<n; i++)
    {
        printf("%d ",z[i]);

    }

    return 0;
}
