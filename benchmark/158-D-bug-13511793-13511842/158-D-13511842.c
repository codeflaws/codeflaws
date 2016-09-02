/*interface*/
#include<stdio.h>
#define N 20000
#define INF 200000000
/*interface implementation*/
/*client*/
int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);
    int i,j,k;
    int t[N];
    for(i=0; i<n; i++) {
        scanf("%d",&t[i]);
    }
    int res=-INF;
    for(i=3; i<=n; i++) {
        if(n%i==0) {
            //说明有n/i个i边形！
            for(j=0; j<n/i; j++) {
                int sum=0;
                for(k=j; k<n; k+=(n/i)) {
                    sum+=t[k];
                }
                //printf("sum=%d\n",sum);
                if(sum>res) res=sum;
            }
        }
    }
    printf("%d\n",res);

    return 0;
}
