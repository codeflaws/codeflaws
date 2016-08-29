#include<stdio.h>
int main(int argc, char *argv[])
{
    int a[10001]={0};
    int n;
    scanf(" %d",&n);
    int i=1;
    int q=n/2;
    if(q&1)
    {

        printf("-1");
        return 0;
    }
    while(i<n/2)
    {
        a[i]=i+1;
        a[i+1]=n-i+1;
        a[n-i+1]=n-i;
        a[n-i]=i;
        i+=2;
    }
    if(n&1)
    {
        a[i]=i;
    }
    i=1;
    while(i<=n)
    {
        printf("%d ",a[i]);
        i++;
    }
    return 0;
}
