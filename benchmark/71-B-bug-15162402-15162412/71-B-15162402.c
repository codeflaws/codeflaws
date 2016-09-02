#include<stdio.h>
int main(int argc, char *argv[])
{
    int t,n,k,i,p=0,j,x;
    scanf("%d%d%d",&n,&k,&t);
    t=n*k*t;
    for(i=1;i<=n;++i)
    {
        if(p+100*k<t && p+(k+1)*100<=t)
        {
            p+=(100*k);
            printf("%d ",k);
        }
        else if(p+100*k<=t && p+(k+1)*100>t)
        {
            printf("%d ",k);
            for(j=i+1;j<=n;++j)
                printf("0 ");
            return 0;
        }
        else
        {
            for(j=1;j<k;++j)
            {
                if(p+100*j<=t && p+(j+1)*100>t)
                {
                    printf("%d ",j);
                    for(x=i+1;x<=n;++x)
                        printf("0 ");
                    return 0;
                }
            }
        }
    }
    return 0;
}
