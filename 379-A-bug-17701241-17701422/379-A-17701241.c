#include<stdio.h>

int main(int argc, char *argv[])
{
    int n,m,x,i,y;
    scanf("%d %d",&n,&m);
    int sum=n;
    for(i=0;;i++){
        x=n%m;
        n=n/m;
        if(n==0)break;
        sum=sum+n;
    }
    printf("%d",sum);

return 0;
}
