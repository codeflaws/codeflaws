#include <stdio.h>
int main(int argc, char *argv[])
{
    int k,n,w,x=0,i;
    scanf("%d %d %d", &k , &n , &w);
    for(i=1;i<=w; i++)
    {
        x=x+i*k;
    }
    if(x>w)
        printf("%d", x-n);
        else{printf("0");}
    return 0;
}
