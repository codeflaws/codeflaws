#include<stdio.h>
int main(int argc, char *argv[])
{
    long long int n,a,j,l,flag=0;
    double k;
    scanf("%lld",&n);
    long long int ara[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&ara[i]);
    }
    for(i=0;i<n;i++)
    {
        flag=0;
        k=sqrt(ara[i]);
        a=k;
        if(k==a)
        {
           l=sqrt(a);
           for(j=2;j<=l;j++)
           {
               if(a%j==0)
               {
                  flag=1;
                  break;
               }
           }
           if(ara[i]==1)
           {
               flag=1;
           }
           if(flag==0)
           {
               printf("YES\n");
           }
           else
           {
               printf("N0\n");
           }
        }
        else
        {
            printf("NO\n");
        }
    }
return 0;
}
