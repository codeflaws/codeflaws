#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,i,t=1;
    scanf("%d",&n);
    if(n==0)
    printf("0");
    else
    {
        for(i=0;i<n-1;i++)
        {
        t=t*3;
        t=t%1000003;
        }
        printf("%d",t);
        }
        return(0);
        }
