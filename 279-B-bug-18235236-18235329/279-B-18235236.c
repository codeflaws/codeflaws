#include<stdio.h>

int main(int argc, char *argv[])
{
        int c,t,n,sum=0,cnt=0,f=0,ans=0;
        scanf("%d %d",&n,&t);
        int a[n];
        for(c=0;c<n;c++)
        {
                scanf("%d",&a[c]);
        }
        for(c=0;c<n;c++)
        {
                sum+=a[c];
                cnt++;
                while(sum>t)
                {
                        cnt--;
                        sum-=a[f];
                        f++;
                }
                ans=ans>=sum?ans:cnt;
        }
        printf("%d",ans);
        return 0;
}
