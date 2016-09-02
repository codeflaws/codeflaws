#include <stdio.h>
int main(int argc, char *argv[])
{
    int i,n,x,y,a[200],z,sum,flag;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]);
    }
    for(x=1;x<=n;x++) {
        flag=0;
        for(y=x+1;y<=n;y++) {
            sum=a[x]+a[y];
            for(z=1;z<=n;z++) {
                if(a[z]==a[x] || a[z]==a[y]) {
                    continue;
                }
                if(sum==a[z]) {
                    flag=1;
                    printf("%d %d %d\n",a[z],a[y],a[x]);
                    return 0;
                }
            }
        }
    }
    printf("-1\n");
    return 0;
}
