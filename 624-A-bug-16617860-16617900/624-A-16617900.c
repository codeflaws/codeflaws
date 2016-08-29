#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{   int d,L,v1,v2;
    scanf("%d%d%d%d",&d,&L,&v1,&v2);
    double t;

    t=1.0*(L-d)/(v1+v2);

    printf("%lf\n",t);
    return 0;
}
