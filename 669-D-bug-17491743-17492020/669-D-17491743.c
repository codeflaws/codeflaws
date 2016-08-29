#include <stdio.h>

int n, q;
int point, sum;
int ans[1000100];

void boymove() {
    for(int i=1;i<=n;i++) {
        if((i+sum)%2==0) ans[i]=(i+sum)%n;
        else ans[i]=(i+n-sum)%n;
        if(ans[i]<=0) ans[i]+=n;
    }
    return;
}

int main(int argc, char *argv[]) {
    scanf("%d %d", &n, &q);
    int ord, mv;
    for(int i=0;i<q;i++) {
        scanf("%d", &ord);
        if(ord==1) {
            scanf("%d", &mv);
            point=(point+n-mv)%n;
        }
        if(ord==2) {
            if(point%2==0) sum++, sum%=n;
            else sum--, sum%=n;
        }
    }
    boymove();
    for(int i=point+1;i<=n;i++) printf("%d ", ans[i]);
    for(int i=1;i<=point;i++) printf("%d ", ans[i]);
}
