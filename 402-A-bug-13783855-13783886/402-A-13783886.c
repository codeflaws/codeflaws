#include <stdio.h>
int main(int argc, char *argv[])
{
    int a,b,v,k,count=0;
    scanf("%d%d%d%d",&k,&a,&b,&v);
        while(a>0)
        {
            if(b>0)
            {
                a=a - (b+1<k?b+1:k)*v;
                count++;
                b=b+1-k;
            }
            else
            {
                a = a-v;
                count++;
            }
        }
    printf("%d",count);
    return 0;
}