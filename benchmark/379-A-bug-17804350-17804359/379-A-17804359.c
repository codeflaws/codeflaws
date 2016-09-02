#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int ans = a;
    int r=0;
    while(a>=b){
        ans+=a/b;
        a=a/b+a%b;
    }
    printf("%d",ans);
    return 0;
}