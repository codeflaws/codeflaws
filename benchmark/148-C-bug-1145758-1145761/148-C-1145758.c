#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,a,b,i,A[110],f=0;
    scanf("%d%d%d",&n,&a,&b);
    if(b!=0)
    {
    A[1]=1;
    for(i=2;i<=n;i++)
    {
        if(i<=b+1)
            A[i]=A[i-1]*2;
        else if(i>(b+1) && i<=(a+b+1))
            A[i]=A[i-1]+1;
        else
            A[i]=A[i-1];
        if(A[i]>50000)
        {
            f=1;
            break;
        }
    }
    }
    else
    {
        A[1]=2,A[2]=1;
        for(i=3;i<=n;i++)
        {
            if(i<=a+2)
                A[i]=A[i-1]+1;
            else
                A[i]=A[i-1];
        }
        if(i<=a+2)
            f=1;
    }
    if(f==1)
        printf("-1");
    else
    {
        for(i=1;i<=n;i++)
            printf("%d ",A[i]);
    }
    return 0;
}