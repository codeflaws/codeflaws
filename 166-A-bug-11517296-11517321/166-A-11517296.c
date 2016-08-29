#include<stdio.h>
struct ss
{
    int a;int b;
}st[200],temp[200];
int main(int argc, char *argv[])
{
    int n,k,i,j,m;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&st[i].a,&st[i].b);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(st[i].a<st[j].a)
            {
                temp[i]=st[i];
                st[i]=st[j];
                st[j]=temp[i];
            }
            else if(st[i].a==st[j].a&&st[i].b>st[j].b)
            {
                temp[i]=st[i];
                st[i]=st[j];
                st[j]=temp[i];
            }
        }
    }
    m=0;
    for(i=0;i<n;i++)
    {
        if(st[k].a==st[i].a&&st[k].b==st[i].b)
        m++;
    }
    printf("%d\n",m);
    return 0;
}
