#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,k,i;
    scanf("%d%d",&n,&k);
    int long long r[100];
    for(i=1;i<=2*n+1;i++)
    {
        scanf("%lld",&r[i]);
    }
    int cnt=0;
   // for(i=1;i<=2*n+1;i++)
    //printf("%d ",r[i]);

    for(i=2*n+1;i>=1;i--)
    {
        if(i%2==0)
        {
            r[i]=r[i]-1;
            if(r[i]>r[i+1] && r[i]>r[i-1])
            {
                 cnt++;
                if(cnt==k)
                break;
            }
            else
            {
                r[i]=r[i]+1;
                continue ;
            }

        }
    }
    for(i=1;i<=2*n+1;i++)
    printf("%lld ",r[i]);

    return 0;
}
