#include<stdio.h>
int main(int argc, char *argv[])
{
    int a1,a2,a3,a4,a5,m;
    scanf("%d %d %d %d %d",&a1,&a2,&a3,&a4,&a5);
    m=a1+a2+a3+a4+a5;
    if(m==0)
    {
        printf("0");
        return 0;
    }
    if((m%5)==0)
    {
        printf("%d",m/5);
    }
    else
    {
        printf("-1");
    }
    return 0;
}
