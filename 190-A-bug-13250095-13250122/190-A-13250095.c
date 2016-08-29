#include <stdio.h>
int main(int argc, char *argv[])
{
    int n,m,min,max;
    scanf("%d %d",&n,&m);
    if(n==0) printf("Impossible");
    else{
        if(m==0 || n>=m) min=n;
        else min=m;
        max=n+m-(m!=0);
        printf("%d %d",min,max);
    }
    return 0;
}
