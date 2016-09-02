#include<stdio.h>
int main(int argc, char *argv[])
{
    int i,a[4],x,y,min=10000;
    for(i=0;i<4;++i)
    {
        scanf("%d",a+i);
        if(min>a[i])
            min=a[i];
    }
    scanf("%d%d",&x,&y);
    if(min>y)
        min=y+1;
    printf("%d",0>min-x?0:min-x);
    return 0;
}
