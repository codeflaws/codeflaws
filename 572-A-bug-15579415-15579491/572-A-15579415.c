#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,m,k,l,a[100000],b[100000],i;
    scanf("%d%d",&n,&m);
    scanf("%d%d",&k,&l);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);
    if(a[k-1]<b[m-(l+1)])
        printf("YES");
    else
        printf("NO");
    return 0;
}
