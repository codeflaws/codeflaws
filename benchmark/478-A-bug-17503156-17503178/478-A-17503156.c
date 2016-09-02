#include <stdio.h>

int main(int argc, char *argv[])
{
    int a[5];
    int i,x;
    for(i = 0; i < 5;i++){
        scanf("%d",&a[i]);
    }
    x = a[0] + a[1] + a[2] + a[3] + a[4];
    if((x % 5)==0) printf("%d",x/5);
    else printf("-1");
    return 0;
}
