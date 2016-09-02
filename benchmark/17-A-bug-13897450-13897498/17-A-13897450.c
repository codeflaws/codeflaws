#include <stdio.h>
#include <math.h>
int a[1000],b[1000];
int isPrime(int n)
{
    int i;

    if (n==2)
        return 1;

    if (n%2==0)
        return 0;

    for (i=3; i<=sqrt(n); i+=2)
        if (n%i==0)
            return 0;
    return 1;
}
int main(int argc, char *argv[])
{
    int i,n,k,f=1,o,j,count=0,sum=0;
    a[0]=1;
    for(i=2; i<=1000; i++)
    {
        if(isPrime(i)==1)
        {
            a[f]=i;
            f++;
        }
    }
    scanf("%d %d",&n,&k);
    for(i=0; i<f; i++)
    {
        sum=1+a[i]+a[i+1];
        if(isPrime(sum)==1)b[sum]++;
    }
    for(i=0; i<=n; i++)
    {
       if(b[i]>=1)count++;
      //  printf("%d %d\n",i,b[i]);
    }
    if(count==k)printf("YES");
    else printf("NO");

    return 0;
}
