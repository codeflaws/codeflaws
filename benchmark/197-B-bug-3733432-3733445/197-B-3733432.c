#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,m,i,p1[101],p2[101];
    scanf("%d%d",&n,&m);
    for(i=0;i<n+1;++i)
    scanf("%d",&p1[i]);
    for(i=0;i<m+1;++i)
    scanf("%d",&p2[i]);
    if(n>m)
    {
        if(p1[0]*p2[0]>0)
        printf("Infinity");
        else printf("-Infinity");
    }
    else if(n<m)
    printf("0/1");
    else
    {
        int p,q;
        p=(p1[0]>0?p1[0]:-p1[0]);
        q=(p2[0]>0?p2[0]:-p2[0]);
        for(i=2;i<=p&&i<=q;++i)
        {
            if(p%i==0&&q%i==0)
            {
                p/=i;
                q/=i;
            }
        }
        if(p1[0]*p2[0]<0)
        printf("-%d/%d",p,q);
        else printf("%d/%d",p,q);
    }
    return 0;
}
