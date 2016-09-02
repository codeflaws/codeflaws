#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a, i, in=0, out=0, x=0, y=0, z=0, n=0, m=0;
    scanf("%d", &a);
    for(i=0; i<a; i++)
    {

        n=y+in;
        scanf("%d %d",&out, &in);

        y=n-out;
        z=y+in;
        if (z>m)
        {
            m=z;
        }
    }
    printf("%d",m);
    return 0;
}
