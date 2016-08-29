#include <stdio.h>
int hem(int a,int b)
{
    int i;
    for(i=a;i>0;i--)
    {
        if(b%i==0)
        {
            return i;
        }
    }
}
int main(int argc, char *argv[])
{
    int a,b,n,t,x;
    while(~scanf("%d%d%d",&a,&b,&n))
    {
        t=0;
        while(n>0)
        {
            if(t==0)
            {
                x=hem(a,n);
                n=n-x;
                t=1;
            }
            else
            {
                x=hem(b,n);
                n=n-x;
                t=0;
            }
        }
        if(t==1)
        printf("0\n");
        else
        printf("1\n");
    }
    return 0;
}
