#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
    int n,a,b,i=0;
    double c;
    scanf("%d",&n);

    for(a=2; a<=n; a++) {
        for(b=1; b<=a; b++) {
            c = sqrt(a*a + b*b);
            if(((int)c - c)==0  && (c<=n))
                i++;
        }
    }
    printf("%d", i);
return 0;
}
