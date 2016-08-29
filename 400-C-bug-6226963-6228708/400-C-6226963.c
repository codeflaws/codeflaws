#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,m,x,nn,j,mm,y,z,i,tmp,p;
    int a,b;
    scanf("%d%d%d%d%d%d",&nn,&mm,&x,&y,&z,&p);
    for(j=1;j<=p;j++)
    {
       n=nn;
       m=mm;
       scanf("%d%d",&a,&b);
       x%=4;
       z%=4;
       if(y%2==0)
       {
         // x=(x+4-z)%4;
          for(i=1;i<=(x+4-z)%4;i++)
          {
             tmp=a;
             a=b;
             b=n-tmp+1;
             tmp=n;
             n=m;
             m=tmp;
          }
          printf("%d %d\n",a,b);
       }
       else
       {
         // x=;
          for(i=1;i<=(x+z)%4;i++)
          {
             tmp=a;
             a=b;
             b=n-tmp+1;
             tmp=n;
             n=m;
             m=tmp;
          }
          printf("%d %d\n",a,mm-b+1);
       }
    }
    return 0;
}
