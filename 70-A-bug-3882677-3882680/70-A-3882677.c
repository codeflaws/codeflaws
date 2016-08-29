#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,sum=1,i;
    scanf("%d",&n);
    if(n==0)
    {
        printf("0");
        return(0);
    }
    else
    {
        for(i=1;i<n;i++)
        {
            sum*=3;
            sum%=1000003;
        }
        printf("%d",sum);
    }
    return(0);
}
