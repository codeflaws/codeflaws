#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
    {
        int n,i,x,y,y0,d,d0,i0,j0;
        scanf("%d",&n);
        scanf("%d%d",&y0,&y);
        if (y<y0) d0 = y0 - y;
        else d0 = y - y0;
        i0 = 1;
        j0 = 2;
        for (i=2;i<n;i++)
            {
                scanf("%d",&x);
                if (x<y) d = y - x;
                else d = x - y;
                if (d<d0)
                    {
                        i0 = i;
                        j0 = i + 1;
                        d0 = d;
                    }
                y = x;
            }
        if (y<y0) d = y0 - y;
        d = y - y0;
        if (d<d0)
            {
                i0 = 1;
                j0 = n;
            }
        printf("%d %d",i0,j0);
    return 0;
}
