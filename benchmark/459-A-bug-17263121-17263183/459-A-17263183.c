#include<stdio.h>
int main(int argc, char *argv[])
{
    int a,b,c,d,i,j,k,l,x,y,z;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a==c||b==d||(a+d)==(b+c)||(a+b)==(c+d))
    {
        if(a==c)
        {
            printf("%d %d %d %d",(a+d-b),b,(c+d-b),d);
        }
        else if(b==d)
        {
            printf("%d %d %d %d",a,(b+c-a),c,(d+c-a));
        }
        else
            printf("%d %d %d %d",a,d,c,b);
    }
    else
        printf("-1");

    return 0;
}
