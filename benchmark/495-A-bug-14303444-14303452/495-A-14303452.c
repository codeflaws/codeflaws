#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{   int n, t, a[10],b,c;

   a[0]=2;
   a[1]=7;
   a[2]=2;
   a[3]=3;
   a[4]=3;
   a[5]=4;
   a[6]=2;
   a[7]=5;
   a[8]=1;
   a[9]=2;

    scanf("%d",&n);
    b=n%10;
    c=n/10;
    t=a[b]*a[c];

    printf("%d",t);
    return 0;
}
