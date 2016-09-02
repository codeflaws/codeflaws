#include <stdio.h>
int main(int argc, char *argv[])
{
    int sum,i,d[7];
    scanf("%d", &sum);
    for(i=1;i<=7;i++)
    {
        scanf("%d", &d[i]);
    }
    for(i=1;i<=7;i++)
    {
        if(sum<=d[i])
        {
            printf("%d", i);
            break;
        }
        sum=sum-d[i];
        if(i==7)
        {
            i=1;
        }
    }
    return 0;
}
