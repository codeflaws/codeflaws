#include<stdio.h>

int main(int argc, char *argv[])
{
    int n,d,arr[105],i,sum1,sum2;

    while(scanf("%d %d",&n,&d)==2)
    {
        sum2=0;
        sum1=0;

        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);

            sum1+=arr[i];

            if(i!=(n-1))
                sum2+=10;
        }

        if(sum1+sum2<=d)
            printf("%d\n",(d-sum1)/5);

        else
            printf("-1\n");
    }

    return (0);
}
