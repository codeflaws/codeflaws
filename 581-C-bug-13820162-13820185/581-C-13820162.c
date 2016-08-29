#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,k,i,j,a[11],ans=0,s=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<=10;i++)
    a[i]=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&j);
        s=s+j;
        ans+=j/10;
        a[10-(j%10)]++;
    }
    if(n*100-s<=k)
    ans=10*n;
    else
    {
        i=1;
        while(k>0&&i<10)
        {
            while(a[i]>0&&k-i>0)
            {a[i]--;
            k=k-i;
            ans++;}
            i++;
        }
        ans+=k/10;
    }
    printf("%d",ans);
    return 0;
}
    