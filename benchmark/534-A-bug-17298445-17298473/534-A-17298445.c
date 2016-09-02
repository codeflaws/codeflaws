#include <stdio.h>
int main(int argc, char *argv[]){
    int n,i;
    scanf("%d",&n);
    if (n == 2) {
        printf("1\n1");
        return 0;
    }
    if (n == 3) {
        printf("2\n1 3");
        return 0;
    }
    printf("%d\n",n);
    for(i=1; i<=n; i+=2)
        printf("%d ",i);
    for(i=2; i<=n; i+=2)
        printf("%d ",i);
    return 0;
}