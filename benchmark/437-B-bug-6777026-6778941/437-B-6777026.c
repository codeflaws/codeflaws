#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
    long long int sum,lim,i,a[10001],cnt,j,ans[10001];
    scanf("%lld %lld",&sum,&lim);
    {
        for(i=1;i<=lim;i++)
        {
            {
                j=i;
                cnt=0;
                while(j%2!=1)
                {
                    cnt++;
                    j=j/2;
                }
                a[i]=pow(2,cnt);
            }
        }
        //for(i=1;i<=lim;i++)
        //printf("%d ",a[i]);
        j=0;
        for(i=lim;i>0;i--)
        {
            if(sum>=a[i])
            {
                sum=sum-a[i];
                ans[j]=i;
                j++;
            }
            if(sum==0)
            break;
        }
        if(sum==0)
        {
            printf("%lld \n",j);
            for(i=0;i<j;i++)
            printf("%lld ",ans[i]);
        }
        else
        printf("-1");
    }
    return 0;
}