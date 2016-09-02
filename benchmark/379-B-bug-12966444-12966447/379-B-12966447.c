//最好的礼物是钱，不同人有不同的最好！
//不错这是一个初级的给机器人设计算法程序的例子！
//至少有一个钱包有钱！
//策略一，一层一层处理！
//300*300=90000,时间够！
//策略左右来回处理！
/*interface*/
#include<stdio.h>
#define N 300+1
/*interface implementation*/
/*client*/
int main(int argc, char *argv[]) {
    //想法二的改进！
    //202032
    //如果a[i]==0，我们就比较a[i+1]和a[i+2]
    int n;
    scanf("%d",&n);
    int a[N];
    int i;
    for(i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    int can_end=0;
    i=0;
    int j;
    int find;
    while(i<n && !can_end) {
        //printf("\ni=%d\n",i);
        while(1) {
            if(a[i]>0) {
                printf("P");
                a[i]--;
            }
            if(a[i]==0 && a[i+1]>0 && i+2<n) {
                break;
            }
            if(i==n-1 && a[i]>0) {
                printf("L");
                i--;
                continue;
            }
            find=0;
            for(j=i; j<n; j++) {
                if(a[j]>0) {
                    find=1;
                    break;
                }
            }
            if(!find) {
                can_end=1;
                break;
            }
            if(!(a[i]==0 && a[i+1]==0 && i+2>=n)) {
                printf("R");
            }

            if(a[i+1]>0) {
                printf("P");
                a[i+1]--;
            }
            find=0;
            for(j=i; j<n; j++) {
                if(a[j]>0) {
                    find=1;
                }
            }
            if(!find) {
                can_end=1;
                break;
            }
            if(a[i]==0 && a[i+1]==0) {
                if(i+2<n) printf("R");
                break;
            } else {
                printf("L");
            }
        }
        if(a[i]==0 && a[i+1]>0 && i+2<n) {
            i++;
            printf("R");
        } else {
            i+=2;
        }
    }
    printf("\n");
    return 0;
}
