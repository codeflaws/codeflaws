#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int n,p1,p2,p3,t1,t2,a,b,i,lr=0,power=0;
    scanf("%d %d %d %d %d %d",&n,&p1,&p2,&p3,&t1,&t2);
    scanf("%d %d",&a,&b);
    power+=(b-a)*p1;
    lr=b;
    for(i=1;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        power+=(b-a)*p1;
        if(lr+t1<=a)
        {
            power+=(t1*p1);
            if(lr+t1+t2<=a)
                power+=(t2*p2)+(a-lr-t1-t2)*p3;
        }
        else
            power+=(a-lr)*p1;
        lr=b;
    }
    printf("%d",power);

    return 0;
}
