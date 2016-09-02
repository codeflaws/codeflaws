#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int n,d,l;
    scanf("%d%d%d",&n,&d,&l);
    int pl=n/2+n%2, min=n/2;
    int add[pl],
        sub[min];
    int i;
    if (d<0) {
        for (i=0; i<pl; i++) add[i]=1;
        d=pl-d;
        for (i=0; i<min; i++) {
            sub[i]=d/(min-i);
            d-=sub[i];
            if (sub[i]>l) {printf("-1"); return 0;}
        }
    } else {
        for (i=0; i<min; i++) sub[i]=1;
        d=min+d;
        for (i=0; i<pl; i++) {
            add[i]=d/(pl-i);
            d-=add[i];
            if (add[i]>l) {printf("-1"); return 0;}
        }
    }
    for (i=0; i<min; i++) printf("%d %d ",add[i], sub[i]);
    if (pl>min) printf("%d",add[pl-1]);

    return 0;
}
