#include<stdio.h>
int main(int argc, char *argv[])
{
    int c1,c2,c3,c4,c5,a,t;
    scanf("%d %d %d %d %d",&c1,&c2,&c3,&c4,&c5);
    a=(c1+c2+c3+c4+c5);
    if(a%5==0)
    {
        t=(a/5);
        printf("%d",t);
    }
    else if(a==0)
    {
        printf("-1");
    }
    else printf("-1");
return 0;
}
