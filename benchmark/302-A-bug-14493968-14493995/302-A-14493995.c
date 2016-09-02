#include <stdio.h>

int main(int argc, char *argv[])
{
    int n,m,i,l,r,temp;
    scanf("%d %d",&n,&m);
    int num1 = 0,num2 = 0;
    for(i = 0;i < n;i++)
    {
        scanf("%d",&temp);
        if(temp == 1)
            num1++;
        else
            num2++;
    }
    if(num1 > num2)
        num1 = num2;
    for(i = 0;i < m;i++)
    {
        scanf("%d %d",&l,&r);
        if((r - l) % 2 != 0)
        {
            if(num1 >= (r - l) / 2 + 1)
                printf("1\n");
            else
                printf("0\n");
        }
        else
            printf("0\n");

    }
    return 0;
}
