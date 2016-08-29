#include <stdio.h>

int main(int argc, char *argv[])
{
    int count,candles,i,a,b;
    scanf("%d %d",&a,&b);
    count=a;

    while(a>=b){
        count=count+a/b;
        a=a/b;
    }

    printf("%d\n",count);

    return 0;
}
