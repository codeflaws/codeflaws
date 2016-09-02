#include <stdio.h>
int n,i;
int main(int argc, char *argv[])
{
    scanf("%d",&n);
    if(n==2){
        printf("0");
        //return 0;
    }
    else if(n==1){
        printf("1\n1");
    }
    else if(n==3){
        printf("2\n1 3");
    }
    else if(n==4) printf("4\n3 1 4 2");
    else {
        printf("%d\n",n);
        for(i=1;i<=n;i+=2) printf("%d ",i);
        for(i=2;i<=n;i+=2) printf("%d ",i);
    }

    return 0;
}
