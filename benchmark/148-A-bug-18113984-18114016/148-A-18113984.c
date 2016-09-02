#include <stdio.h>
int ara[1001];
int main(int argc, char *argv[])
{
    int i,k,l,m,n,d,count=0;
    scanf("%d",&k);
    scanf("%d",&l);
    scanf("%d",&m);
    scanf("%d",&n);
    scanf("%d",&d);
    for(i=k; i<=d; i=i+k)
        ara[i]=1;
    for(i=l; i<=d; i=i+l)
        ara[i]=1;
    for(i=m; i<=d; i=i+m)
        ara[i]=1;
    for(i=n; i<=d; i=i+n)
        ara[i]=1;
    for(i=1; i<=d; i++)
    {
        if(ara[i]==1)
            count++;
    }
    printf("%d\n",count);

return 0;
}
