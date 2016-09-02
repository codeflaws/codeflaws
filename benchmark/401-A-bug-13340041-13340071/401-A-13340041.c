#include <stdio.h>
#include <math.h>
#define boro 1000
int main(int argc, char *argv[])
{
    int card[boro],n,x,i,lagbe,sum=0;
    scanf("%d %d",&n, &x);
    for (i=0; i<n; i++) {
        scanf("%d",&card[i]);
        sum=sum+card[i];
    }
    sum=abs(sum);
    lagbe=(sum/x)+1;
    printf("%d",lagbe);
    return 0;
}
