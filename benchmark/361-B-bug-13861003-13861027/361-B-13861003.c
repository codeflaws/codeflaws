#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int n,k,i,j,s[1000];
    scanf("%d%d",&n,&k);
    if(n==k){
        printf("-1");
        return 0;
    }

    for(i=n-k+1;i<=n;i++)
        s[i]=i;
    s[n-k]=1;
    for(i=1;i<n-k;i++)
        s[i]=i+1;
    for(i=1;i<=n;i++)
        printf("%d ",s[i]);

    return 0;
}

