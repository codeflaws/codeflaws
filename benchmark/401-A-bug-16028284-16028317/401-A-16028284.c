#include <stdio.h>


int abs(int x)
{
     return (x<0)? -x:x;
}


int main(int argc, char *argv[])
{
     int i,a,b,c,sum=0;
     scanf("%d%d",&a,&b);
     for (i=0;i<a;i++)
     {
          scanf("%d",&c);
          sum=sum+c;
     }
     sum=abs(sum);
     if (sum<b) printf("1");
     else
     {
          c=sum%b;
          if (c==0) printf("%d",sum/b);
          else printf("%d",sum/b+1);
     }
     return 0;
}
