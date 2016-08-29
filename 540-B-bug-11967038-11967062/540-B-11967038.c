#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,k,p,x,y,sum,m,i,q,d,a,l,ar[2000];
    scanf("%d%d%d%d%d",&n,&k,&q,&x,&y);
    sum=0;m=0;
    for(i=1; i<=k; i++)
    {
        scanf("%d",&a);
        if(a>=y)
            m++;
        sum+=a;
    }
    d=(n+1)/2;
    p=0;
    l=0;
    if(d+(k-m)<=n){
    for(i=m; i<d; i++)
    {
        if(y<=x){
        l++;
        sum+=y;
        ar[p++]=y;}
        else
        {
            printf("-1\n");
            return 0;
        }
    }}
    else
    {
        printf("-1\n");
            return 0;
    }
    k=k+l;
    if((n-k)>0)
    {
        x=(x-sum)/(n-k);
        if(x>0)
        {
            for(i=1; i<=n-k; i++)
            {
                ar[p++]=1;
            }
            for(i=0; i<p; i++)
            {
                printf("%d",ar[i]);
                if(i!=p-1)
                    printf(" ");
            }
            printf("\n");
        }
        else
            printf("-1\n");
    }
    else
    {
        for(i=0; i<p; i++)
        {
            printf("%d",ar[i]);
            if(i!=p-1)
                printf(" ");
        }
    }

return 0;
}
