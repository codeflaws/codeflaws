#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,i,k=0,d=0,a,b,c;
    scanf("%d",&n);
    if(n%2==0)
    {
        a=n/2+1;
    }
    else
        a=(n+1)/2;
    while(1)
    {
        if(k%2==0)
        {
            printf("%d ",a+d);
            a=a+d;
            d++;
            k++;
        }
        else
        {
            printf("%d ",a-d);
            a-=d;
            d++;
            k++;
        }
        if(d==n)
            break;
    }

}
