/*interface*/
#include<stdio.h>
#define N 100
/*interface implementation*/
/*client*/
int main(int argc, char *argv[]) {
    int negative[N];
    int positive[N];
    int ni=0;
    int pi=0;
    int n;
    scanf("%d",&n);
    int i;
    for(i=0; i<n; i++) {
        int a;
        scanf("%d",&a);
        if(a>0) {
            positive[pi]=a;
            pi++;
        } else if(a<0) {
            negative[ni]=a;
            ni++;
        }
    }
    printf("1 %d\n",negative[0]);
    //负数剩下ni-1个！
    if((ni-1)%2==0) {
        printf("%d",ni-1+pi);
        for(i=1; i<ni; i++) {
            printf(" %d",negative[i]);
        }
	//第二类，打印全部的正数！
        for(i=0; i<pi; i++) {
            printf(" %d",positive[i]);
        }
        printf("\n");
        printf("1 0\n");
    } else {
        printf("%d",ni-2+pi);
        for(i=1; i<ni-1; i++) {
            printf(" %d",negative[i]);
        }
        for(i=0; i<pi; i++) {
            printf(" %d",positive[i]);
        }
        printf("\n");
        printf("1 0 %d\n",negative[ni-1]);
    }
    return 0;
}
