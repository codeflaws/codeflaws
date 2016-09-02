#include<stdio.h>

int main(int argc, char *argv[])
{
    int a1,b1,a2,b2,a3,b3,temp,flag;

    scanf("%d%d%d%d%d%d",&a1,&b1,&a2,&b2,&a3,&b3);
    flag=0;
    if(a1<b1)
    {
        temp=a1;
        a1=b1;
        b1=temp;
    }
    if(a2<b2)
    {
        temp=a2;
        a2=b2;
        b2=temp;
    }
    if(a3<b3)
    {
        temp=a3;
        a3=b3;
        b3=temp;
    }
    if(a1>=a2&&a1>=a3&&b1>=b2+b3)flag=1;
    else if(a1>=a2&&b1>=b2+a3)flag=1;
    else if(a1>=a2+b3&&b1>=b2&&b1>=a3)flag=1;
    else if(a1>=a2+a3&&b1>=b2&&b1>=b3)flag=1;
    else if(a1>=a3&&b1>=b3+a2)flag=1;
    else if(a1>=a3+b2&&b1>=b3&&b1>=a2)flag=1;
    if(!flag)printf("NO\n");
    else printf("YES\n");

    return 0;
}
