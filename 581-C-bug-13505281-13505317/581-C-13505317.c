#include <stdio.h>

int min(int a,int b)
{
    return (a<b?a:b);
}

int main(int argc, char *argv[])
{
    int n,k,i,x,a[10]={0},total=0;
    scanf("%d%d",&n,&k);
    for (i=0;i<n;i++)
    {
        scanf("%d",&x);
        total+=x/10;
        a[x%10]++;
    }
    for (i=9;i>0;i--)
        if (k>=(a[i]*(10-i)))
        {
            total+=a[i];
            k-=a[i]*(10-i);
        }
        else
        {
            total+=k/(10-i);
            k=0;
        }
    printf("%d\n",min(10*n,total+k/10));
    return 0;
}
