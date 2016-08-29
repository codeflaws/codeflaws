#include <stdio.h>
int main(int argc, char *argv[])
{
    int i,n,j,x,y,k;
    scanf("%d",&n);
    printf("%d ",n);
    if(n==1) {
        return 0;
    }
    k=n;
    do{
        y=k/2;
        for(i=y;i>=1;i--) {
            if(k%i==0) {
                printf("%d ",i);
                break;
            }
        }
        k=i;
    }while(k!=1);
    return 0;
}
