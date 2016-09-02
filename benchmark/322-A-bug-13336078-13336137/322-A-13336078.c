#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,m,i;
    scanf("%d %d",&n,&m);
    printf("%d\n",n+m-1);
    for(i=1;i<=n;i++){
        printf("%d ",i);
        printf("1\n");
    }
    for(i=1;i<=n;i++){
        printf("1 ");
        printf("%d\n",i);
    }
    return 0;
}
