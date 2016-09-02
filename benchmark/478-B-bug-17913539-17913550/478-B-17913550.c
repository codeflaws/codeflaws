#include<stdio.h>
#include<math.h>
 long long int combina(long long int y);
 int main(int argc, char *argv[])
 {
   long long int i,kmax=0,kmin=0,m,n,base,min;
    scanf("%lld %lld",&n,&m);
    long long int v[m];
    base=n/m;
    min=n%m;
    kmin=min*combina(ceil((float)n/m))+(m-min)*(combina(base));
    kmax=combina(n-m+1);
     printf("%lld %lld\n",kmin,kmax);
  return 0;
 }
 long long int combina(long long int y)
 {
    return (y*(y-1))/2;
 }
