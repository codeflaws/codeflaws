#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
    {
        int n,d,x,y,z,i;
        scanf("%d%d",&n,&d);
        x = 0;
        z = 0;
        for (i=0;i<n;i++)
            {
                scanf("%d",&y);
                if (z<y) z = y;
                else
                    {
                        x = x + ((z - y) / d) + 1;
                        z = z - (z%d) + d;
                    }
            }
        printf("%d",x);
    return 0;
}
