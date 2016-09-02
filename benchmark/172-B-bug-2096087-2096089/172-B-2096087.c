#include <stdio.h>
int main(int argc, char *argv[])
{static long long int x,t,c,m,r,i,j,s[100001];
int a,b;
scanf("%d%d%lld%lld",&a,&b,&m,&r);x=r;
s[0]=r;
while(c!=1)
{r=(a*r+b)%m;
 s[r]++;i++;
 if(s[r]==2)
    {c++;t=r;}}
r=x;c=0;
while(c!=1)
  {r=(a*r+b)%m;
      j++;
       if(r==t)
            c++;}
 printf("%lld\n",i-j);
return 0;}
