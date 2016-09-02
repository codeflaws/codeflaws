#include <stdio.h>

int main(int argc, char *argv[]){
    int i,n,k;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n-k-1;i++) printf("%d ",i);
    for(i=n-k;i<=n;i++) printf("%d ",2*n-k-i);

    return 0;
}