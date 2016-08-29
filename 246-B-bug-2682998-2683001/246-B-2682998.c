#include <stdio.h>
int main(int argc, char *argv[]){
    int n,a[10000],i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i-1]);
    }
    for(j=1;j<=n-1;j++){
        a[j]=a[j-1]+a[j];
    }
    if(a[n-1]%n==0)printf("%d",n);else printf("%d",n-1);
    return 0;
    }