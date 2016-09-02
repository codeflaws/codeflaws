#include <stdio.h>
int main(int argc, char *argv[])
{
    int ara1[200000];
    int ara2[200000];
    int n,a=0,b=0,c=0,h,w;
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)    {
        scanf("%d %d",&w,&h);
        ara1[i]=w;
        ara2[i]=h;
        a+=w;
        if(h>b)    {
            b=h;
        }
        else if(h>c)    {
            c=h;
        }
    }
    for(i=0;i<n-1;i++)    {
        w=a-ara1[i];
        if(ara2[i]==b)    {
            h=c;
        }
        else    {
            h=b;
        }
        j=w*h;
        printf("%d ",j);
    }
    i=n-1;
    w=a-ara1[i];
    if(ara2[i]==b)    {
        h=c;
    }
    else    {
        h=b;
    }
    j=w*h;
    printf("%d\n",j);
    return 0;
}
