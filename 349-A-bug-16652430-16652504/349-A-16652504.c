#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n;
    scanf("%d",&n);
    int x1=0,x2=0,x3=0,x;
    while(n--)
    {
        scanf("%d",&x);
        if(x==25)
            x1++;
        else if(x==50)
        {
            x2++;
            if(x1>0)
                x1--;
            else
            {
                printf("NO");
                return 0;
            }
        }
        else if(x==100)
        {
            x3++;
            if (x1>0 && x2>0)
            {
                x1--;
                x2--;
            }
            else if(x1>=3)
                x1-=3;
            else
            {
                printf("NO");
                return 0;
            }
        }
    }
    printf("YES");
}
