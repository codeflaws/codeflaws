#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,t,i;
    scanf("%d %d",&n,&t);
    if(t<=9)
    {
        for(i=1;i<=n;i++)
        {
            printf("%d",t);
        }
    }
    if(t==10)
    {
        if(n==1)
        {
            printf("10");
        }
        else{
        for(i=1;i<n;i++)
        {
            printf("1");
        }
        printf("0");}
    }
    return 0;
}
