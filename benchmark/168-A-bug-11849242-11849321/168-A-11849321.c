#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
    int n,x,y,pup;
    scanf("%d %d %d", &n,&x,&y);
    pup=y*n;
    int dem=ceil(pup/100.0);
    if((dem-x)>0)printf("%d", dem-x);
    else printf("0");
    return 0;
}
