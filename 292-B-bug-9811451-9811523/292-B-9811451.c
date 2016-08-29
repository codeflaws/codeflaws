#include <stdio.h>
#include <stdlib.h>
int t[100002];
int main(int argc, char *argv[])
{
    int n,m,i,a,b,x=1,k;
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%d%d",&a,&b);
        t[a]++;
        t[b]++;
        if (t[a]>2 ){ x=0; k=a;}
        if (t[b]>2 ){ x=0; k=b;}
    }
    if (!x)
    {
        for(i=1;i<=n;i++)
        {
            if ( i!= k && t[i]!=1) { printf("unknown topology"); return 0 ;}
        }
        printf("star topology");
        return 0;
    }
    if (n==m)
    {
        for(i=1;i<=n;i++)
        {
            if (t[i]!=2) { printf("unknown topology"); return 0 ;}
        }
        printf("ring topology");
        return 0;
    }
    a=0;b=0;
    for(i=1;i<=n;i++)
    {
        if (t[i]==1) a++;
        if (t[i]==1) b++;
    }
    if(a==2 && b== n-2) {printf("bus topology"); return 0;}
    printf("unknown topology");
    return 0;
}
