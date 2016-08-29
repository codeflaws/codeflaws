#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int n,k,l,r,i,mode=0;
    long long sall,sk;
    int a[1000]={0};
    scanf("%d",&n);
    scanf("%d",&k);
    scanf("%d",&l);
    scanf("%d",&r);
    scanf("%lld",&sall);
    scanf("%lld",&sk);
    for(i=0;i<k;i++){
        mode+=sk%k;
        if(mode>=k){
            printf("%d ",sk/k+1);
            mode-=k;
        }
        else
            printf("%d ",sk/k);
    }
    sall-=(sk/k)*k;
    i=0;
    while(sall){
        a[i]++;
        if(i==n-k-1)
            i=0;
        else
            i++;
        sall--;
    }
    for(i=0;i<n-k;i++)
        printf("%d ",a[i]);
    return 0;
}
