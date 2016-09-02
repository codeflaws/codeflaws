#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int min (int x,int y)
{
    return x<y? x:y;
}

int main(int argc, char *argv[])
{
    int x,y,i;
    scanf("%d %d\n",&x,&y);
    printf("%d\n",min(x,y));
    for (i=0;i<=min(x,y);++i)
        printf("%d %d\n",i,min(x,y)-i);
    return 0;
}
