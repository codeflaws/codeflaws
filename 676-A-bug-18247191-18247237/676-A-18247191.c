#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
    int b,c,d,e,n,i,f,l,a[10000],count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
              scanf("%d",&a[i]);
              if(a[i]==1)
              f=i;
              if(a[i]==n)
              l=i;
    }
    if((f==1&&l==n)||(l==1&&f==n))
    count=n-1;
    else
    
    {
              b=abs(f-1);
    if(b>count)
    b=count;
    c=abs(f-n);
    if(c>count)
    count=c;
    d=abs(l-1);
    if(d>count)
    count=d;
    e=abs(l-n);
    if(e>count)
    count=e;
              
    }
    printf("%d",count);
    return 0;
}