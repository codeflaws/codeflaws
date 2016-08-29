#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,a,b,sum=0,i;
    scanf("%d", &n);
    int ara[n+1];

    ara[0] = 0;
    ara[1]=0;
    for(i=2;i<n+1;i++){
        scanf("%d", &ara[i]);
    }

    scanf("%d %d", &a,&b);

    for(i=a;i<=b;i++){
        sum = sum + ara[i];
    }
    printf("%d", sum-ara[a]);

    return 0;
}
