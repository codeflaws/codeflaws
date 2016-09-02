#include <stdio.h>

#define MIN(a,b) (a<b)?a:b;

int main(int argc, char *argv[])
{
    int a, b;
    scanf("%d%d", &a, &b);
    int c = MIN(a,b);
    int i=0;
    printf("%d\n",c+1);
    for(i=0;i<=c;i++){
           printf("%d %d\n",i,c-1);
           }
    return 0;
}