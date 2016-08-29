#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]),b[i]=0;

    int ans=0;
    for(i=0;i<n;i++)
    {
        if(b[a[i]-1]==0)
            b[a[i]-1]++;
    }
    for(i=0;i<n;i++)
        if(b[i]==0)
            ans++;
    printf("%d",ans);
    return 0;
}
