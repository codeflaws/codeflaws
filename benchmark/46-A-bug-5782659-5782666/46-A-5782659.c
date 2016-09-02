#include <stdio.h>
int main(int argc, char *argv[])
{
    int n,i,sum,t;
    while(scanf("%d",&n)!=EOF)
    {
        sum=2;t=2;
        for(i=0;i<n-1;i++)
        {
            if(i!=0)
            printf(" ");
            printf("%d",sum);
            sum+=t;
            sum=sum%n;
            t++;
            if(sum==0)
            sum=1;
        }
        printf("\n");
    }
    return 0;
}
