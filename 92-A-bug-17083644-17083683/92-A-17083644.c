#include<stdio.h>
int main(int argc, char *argv[])
{
    int m,n,i;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        m=m-i;

        if(m>0&&i==n)
            i=0;
        if(m<0)
        {
            printf("%d",m+i);
            break;
        }
    }
return 0;
}
