#include<stdio.h>
//#include<conio.h>
int main(int argc, char *argv[])
{
    int n,p,a[200],ans=0,i,k=0,d=0,m=0,g=0,f=0;
    scanf("%d%d",&n,&p);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    a[n+1]=2000;
    a[0]=1000;
    if (a[p]==1)
        ans++;
    for (i=1;i<=n;i++)
    {
          if ((a[p+i]==2000)&&(a[p-i]==1000))
        {
            break;
        }
        if (a[p-i]==a[p+i])
        {
            if (a[p-i]==1)
             ans=ans+2;
        }
        if (a[p-i]==1000)
        {
            if (a[p+i]==1)
                ans++;
            k=1;
            d=i+1;
            break;
        }
        if (a[p+i]==2000)
        {
            if (a[p-i]==1)
                ans++;
            g=2;
            m=i+1;
            break;
        }

    }
    if (k==1)
    {
       for (i=d;i<=n;i++)
       {
           if (p+i>6)
            break;
           if (a[p+i]==1)
            ans++;
       }
    }
    if (g==2)
    {
       for (i=m;i<=n;i++)
       {
           if (p-i<0)
            break;
           if (a[p-i]==1)
            ans++;
       }
    }
    printf("%d",ans);
    return 0;
}
