#include<stdio.h>

int gcd(int a,int b,int m)
{ int k;
   k=a%b;
   m=m+a/b;
   if(k==0)
    return m;
    else
    return gcd(b,k,m);

  }

int main(int argc, char *argv[])
 {int i,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 { int a,b,m=0;
   scanf("%d%d",&a,&b);
   m=gcd(a,b,m);
   printf("%d\n",m);
   }
  return 0;
  }
