#include <stdio.h>
int main(int argc, char *argv[])
{
    int y,x,n,k,flag=0,i,j;
    scanf("%d %d %d",&y,&k,&n);
    x=n-y;
    i=k-x%k;
    if(i>x) {
        printf("-1\n");
        return 0;
    }
    while(i<=x) {
        printf("%d ",i);
        i+=k;
    }
    return 0;
}
