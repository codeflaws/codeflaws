#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n,m,k,a[50000],h;

void dfs(int i,int t)
{
    if(i>m+n)return;
    int j,p;
    for(j=0;j<t;j++)
    {
        a[h++]=i;
    }
    p=i+m-1;
    if(p>m+n)return;
    a[h++]=p;
    dfs(i+m,k-1);
}

int main(int argc, char *argv[])
{
    int i;
    while(scanf("%d%d%d",&m,&n,&k)!=EOF)
    {
        if(k==1)
        {
            if(m==2)
            {
                printf("%d\n",m+n);
                for(i=1;i<m+n;i++)
                    printf("%d ",i);
                printf("%d\n",i);
            }
            else
            {
                if(n>=m-1)
                    printf("3\n");
                else
                    printf("2\n");
                printf("1 %d",m);
                if(n>=m-1)
                    printf(" %d\n",2*m-1);
                else
                    printf("\n");
            }
        }
        else
        {
            h=0;
            dfs(1,k);
            printf("%d\n",h);
            for(i=0;i<h-1;i++)
            {
                printf("%d ",a[i]);
            }
            printf("%d\n",a[i]);
        }

    }
    return 0;
}
