#include<stdio.h>

int main(int argc, char *argv[]){
    int a1,a2,a3,a4;
    scanf("%d%d%d%d",&a1,&a2,&a3,&a4);
    if((a1+a2>a3&&a2+a3>a1&&a3+a1>a2) || (a1+a2>a4&&a2+a4>a1&&a1+a4>a2) || (a2+a3>a4&&a3+a4>a2&&a2+a4>a3)
        || (a1+a3>a4&&a3+a4>a1&&a1+a4>a3))
        printf("TRIANGLE\n");
    else if ((a1+a2==a3||a2+a3==a1||a3+a1==a2) || (a1+a2==a4||a2+a4==a1&&a1+a4==a2) || (a2+a3==a4||a3+a4==a2||a2+a4==a3)
        || (a1+a3==a4||a3+a4==a1||a1+a4==a3))
        printf("SEGMENT\n");
    else if((a1+a2<a3||a2+a3<a1||a3+a1<a2) || (a1+a2<a4||a2+a4<a1||a1+a4<a2) || (a2+a3<a4||a3+a4<a2||a2+a4<a3)
        || (a1+a3<a4||a3+a4<a1||a1+a4<a3))
        printf("IMPOSSIBLE\n");
    return 0;
}

