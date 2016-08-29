#include<stdio.h>
int a[10000001]={0};
int c[10000001]={0};
struct pair
{
    int l;
    int r;
}b[10000001];
int main(int argc, char *argv[])
{
    int n,i,j=0,k=0,m=1000000;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int temp;
        scanf("%d",&temp);
        a[temp]=1;
        c[i]=temp;
    }
    printf("%d\n",n);
    for(i=1;i<=(m/2);i++)
    {
        if(a[i]==0 && a[m+1-i]==0)
        {
           b[k].l=i;
           b[k].r=m+1-i;
           k++;
        }
    }

    for(i=1;i<=m/2;i++)
    {
        if(a[i]==0 && a[m+1-i]==1)
        {
            printf("%d ",i);
            a[i]=2;
            a[m+1-i]=2;
        }
        else if(a[i]==1 && a[m+1-i]==0)
        {
            printf("%d ",m+1-i);
            a[m+1-i]=2;
            a[i]=2;
        }
        else if(a[i]==1 && a[m+1-i]==1)
        {
            printf("%d %d ",b[j].l,b[j].r);
            a[b[j].l]=2;a[b[j].r]=2;
            j++;
        }
    }
return 0;}
