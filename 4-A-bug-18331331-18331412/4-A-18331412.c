#include<stdio.h>
int main(int argc, char *argv[])
{
    int wgt;
    scanf("%d",&wgt);
    if(wgt%2==0&&wgt>2)
        printf("YES");
    else
        printf("NO");
    return 0;
}
