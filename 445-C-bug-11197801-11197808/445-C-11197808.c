#include <stdio.h>
int n,m,i,a[1000100],b[1000100],c[1000100],v[1010];
long double max=-1;
int main(int argc, char *argv[])
{
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&v[i]);
    }
    int pos=1;
    for(i=1;i<=m;i++)
    {
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
        if((v[a[i]]+v[b[i]])*1.0/c[i]>(v[a[pos]]+v[b[pos]])*1.0/c[pos])
        {
            pos=i;
        }
    }
    if(m!=0)
    printf("%0.15f\n",(v[a[pos]]+v[b[pos]])*1.0/c[pos]);
    else
    printf("0\n");
    return 0;
}
