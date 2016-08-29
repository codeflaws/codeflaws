#include<stdio.h>
int x[31],y[31],d[31];
int main(int argc, char *argv[])
{
    int n,i,h,max=0,min=0;
    scanf("%d%d",&n,&h);
    for(i=1;i<=n;++i)
    {
        scanf("%d%d",x+i,y+i);
        min+=x[i];
        max+=y[i];
    }
    if(min>h || max<h)
    {
        printf("NO");
        return 0;
    }
    else
    {
        int lack=h-min;
        for(i=1;i<=n;++i)
        {
            if(lack>y[i]-x[i])
            {
                lack-=(y[i]-x[i]);
                d[i]=y[i];
            }
            else if(lack)
            {
                d[i]=x[i]+lack;
                lack=0;
            }
            else
                d[i]=x[i];
            printf("%d ",d[i]);
        }
    }
    return 0;
}
