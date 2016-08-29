#include <stdio.h>

int main(int argc, char *argv[])
{
    int p1,p2,p3,p4,a,b,c;
    scanf("%d %d %d %d %d %d",&p1,&p2,&p3,&p4,&a,&b);
    c=p1;
    if(p2<c)
    {
        c=p2;
    }
    if(p3<c)
    {
        c=p3;
    }
    if(p4<c)
    {
        c=p4;
    }
    if(a>c)
    {
        printf("0\n");
        return 0;
    }
    if(c>b)
    {
        c=b+1;
    }
    printf("%d\n",c-a);
    return 0;
}
