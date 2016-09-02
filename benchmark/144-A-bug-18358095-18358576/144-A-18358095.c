#include<stdio.h>
//#include<conio.h>
int main(int argc, char *argv[])
{
    int j=1,n,i,a[150],p[150],min,ans,y,max,h,q[150];
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[1];
    h=1;
    p[1]=1;
    for (i=2;i<=n;i++)
    {
        if (min>a[i])
        {
            h=1;
            j=1;
            min=a[i];
            p[j]=i;
            continue;
        }
        if (min==a[i])
        {
            h++;
            j++;
            p[j]=i;
        }
    }
    j=1;
    y=1;
    max=a[1];
    q[1]=1;
    for (i=2;i<=n;i++)
    {
        if (max<a[i])
        {
            y=1;
            j=1;
            max=a[i];
            q[j]=i;
            continue;
        }
        if (max==a[i])
        {
            y++;
            j++;
            q[j]=i;
        }
    }
    if (q[y]<p[h])
    {
        ans=q[y]-1+(n-p[h]);
    }
    else
    {
        ans=n-p[h]+(q[y]-2);
    }
    printf("%d",ans);
    return 0;
}
