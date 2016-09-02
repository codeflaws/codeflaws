#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MOD 1000000007
int a[1001],b[1001];


int main(int argc, char *argv[])
{
    int n,i;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
      scanf("%d",&a[i]);
    for (i=1;i<=n+1;i++)
     {
         b[i]=(2*b[i-1]-b[a[i]-1]+1)% MOD;
         printf("%d %d\n",i,b[i]);
     }
    printf("%d",b[n+1]-1);
    return 0;
}
