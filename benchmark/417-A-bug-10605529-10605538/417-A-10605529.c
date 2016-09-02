#include <stdio.h>
int main(int argc, char *argv[])
{
    int c,d,m,n,k;
    scanf("%d%d",&c,&d);
    scanf("%d%d",&n,&m);
    scanf("%d",&k);
    int l=m*n-k,ans=0;
    if(l>0){
    if(c<n*d)
    {
        ans+=(l/n)*c;
        if(c<(l%n)*d)
            ans+=c;
        else
            ans+=(l%n)*d;
    }
    else
        ans+=(l-n)*d;
    printf("%d\n",ans);}
    else
    printf("0\n");
    return 0;
}