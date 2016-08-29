#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int k ,b ,n ,t , x=1;
    scanf("%d%d%d%d",&k,&b,&n,&t);
    while((k*x+b)<=t){
        n--;
        x=k*x+b;
        if(n==0)
            break;
    }
    printf("%d",n);
    return 0;
}
