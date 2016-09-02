#include<stdio.h>
int main(int argc, char *argv[])
{
    int m,n,i,j,cmd,v,x,sum,a[100005];
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        for(i=1;i<=n;i++)scanf("%d",&a[i]);
        sum=0;
        for(i=1;i<=m;i++)
        {
            scanf("%d",&cmd);
            if(cmd==1)
            {
                scanf("%d%d",&v,&x);
                a[v]=x;
            }
            else if(cmd==2)
            {
                scanf("%d",&x);
                sum+=x;
            }
            else
            {
                scanf("%d",&v);
                printf("%d\n",a[v]+sum);
            }
        }
    }
    return 0;
}