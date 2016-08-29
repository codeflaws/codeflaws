#include<stdio.h>
int a[1000005];
int vis[1000005];
int main(int argc, char *argv[])
{
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    int ar=1,al=1,l=0,now=0;
    for(int i=0;i<n;i++)
    {
        vis[a[i]]++;
        if(vis[a[i]]==1) now++;
        while(now>k)
        {
            vis[a[l]]--;
            if(vis[a[l]]==0)
                now--;
            l++;
        }
        if(i-l+1>al-ar+1)
        {
            al=i+1;
            ar=l+1;
        }

    }
    printf("%d %d\n",ar,al);
return 0;
}
