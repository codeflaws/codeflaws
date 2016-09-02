#include<stdio.h>
int main(int argc, char *argv[])
{
    float pi=3.14;
    int d,h,v,e;
    scanf("%d%d%d%d",&d,&h,&v,&e);
    if(pi*d*d*e/4>=v)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
        printf("%f\n",h*pi*d*d/(v*4-(pi*d*d*e)));
    }
    return 0;

}
