#include <stdio.h>
#define MAXN 100033
int main(int argc, char *argv[])
{
    int n,i,j,test;
    int tmp[MAXN];
    int out[MAXN];

    while(scanf("%d",&n)!=EOF)
    {

        if(n==1)
        {
            puts("1");
            continue;
        }
        if(n&1)
        {
            test=(n-1)/2;
            out[test+1]=test+1;
        }
        else test=n/2;
        if(test&1)
        {
            puts("-1");
            continue;
        }
        else
        {
            for(i=1,j=n;i<=n;i++,j--)tmp[i]=j;
            printf("t %d\n",test);
            for(i=1;i<test;i+=2)
            {
                j=i+1;
                out[i]=j;
                out[j]=tmp[i];

                out[tmp[i]]=tmp[j];
                out[tmp[j]]=i;
            }
            for(i=1;i<=n;i++)
            {
                printf("%d ",out[i]);
            }
            putchar('\n');
        }
    }
    return 0;
}
