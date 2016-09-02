#include <stdio.h>
int main(int argc, char *argv[])
{
    double a[10],x;
    int i,n;
    for(i=1;i<=6;i++) {
        scanf("%lf",&a[i]);
        if(a[i]==0) {
            a[i]=0.00001;
        }
    }
    if(a[1]==0.00001 && a[2]==0.00001 && a[3]!=0.00001) {
        printf("Hermione\n");
        return 0;
    }
    if(a[1]==0.00001 && a[4]==0.00001) {
        printf("Hermione\n");
        return 0;
    }
    if(a[1]!=0.00001 && a[4]==0.00001) {
        printf("Hermione\n");
        return 0;
    }
    if(a[4]!=0 && a[1]==0.00001 && a[2]==a[3]) {
        printf("Ron\n");
        return 0;
    }
    if(a[2]==0.00001&& a[3]==0.00001 && a[5]!=0.00001 && a[4]/a[1]!=a[5]/a[6]) {
        printf("Ron\n");
        return 0;
    }
        x=(a[2]+0.0)/(a[1]+0.0)*a[4]/a[3]*((a[6]+0.0)/(a[5]+0.0));
        if(x>1) {
            printf("Ron\n");
        }
        else {
            printf("Hermione\n");
        }
    return 0;
}
