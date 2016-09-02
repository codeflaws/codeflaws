#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int r1,r2,c1,c2,d1,d2,flag = 1;
    int x1=0,x2,x3,x4;

    scanf("%d %d",&r1,&r2);
    scanf("%d %d",&c1,&c2);
    scanf("%d %d",&d1,&d2);

    for(x1=1;flag&&x1<=20;x1++)
    {
        for(x2=1;flag&&x2<=20;x2++)
        {
            for(x3=1;flag&&x3<=20; x3++)
            {
                for(x4=1;flag&&x4<=20;x4++)
                {
                    if( (c1 == x1+x3) && (x1+x2 == r1) && (x3+x4 == r2) && (x2+x4==c2) && (d1 == x1+x4) && (d2==x2+x3)
                        &&(x1 != x3) && (x1!=x4) && (x2 != x3) && ( x2 != x4) && x1<9 && x2<9 && x3<9 && x4<9)
                    {
                        flag = 0;
                    }
                }
            }
        }
    }

    if(flag == 0)
    {
        printf("%d %d\n",x1-1,x2-1);
        printf("%d %d",x3-1,x4-1);
    }
    else
    {
            printf("-1");
    }

    return 0;
}
