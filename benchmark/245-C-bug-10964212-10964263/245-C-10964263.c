#include<stdio.h>
int ww[105];
int main(int argc, char *argv[])
{
    int n,nn=0,i,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&ww[i]);
    }
    if(n%2==0||n==1)
    {
        printf("-1\n");
    }
    else
    {
        for(i=n;i>0;)
        {
            while(ww[i]<=0)
            {
                i--;
            }
            if(i<=0)
                break;
            if(i%2==1)
            {
                x=(i-1)/2;
                ww[i]--;
                ww[2*x]--;
            }
            else
            {
                x=i/2;
                ww[i]--;
            }
            ww[x]--;
            nn++;
        }
        printf("%d\n",nn);
    }
    return 0;
}
