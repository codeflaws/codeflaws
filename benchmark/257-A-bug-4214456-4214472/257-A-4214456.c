#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,d,s,i,j,t,c=0;
    scanf("%d %d %d",&n,&d,&s);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    s=s-1;
    d=d-s;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]<a[j])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(d<=0)
        break;
        if(a[i]==1)
        continue;
        if(d-a[i]<=0)
        {
            d=d-a[i];
        }
        else
        d=d-a[i]+1;
        c++;
    }
    if(d<=0)
    printf("%d",c);
    else
    printf("-1");
    return 0;
}
