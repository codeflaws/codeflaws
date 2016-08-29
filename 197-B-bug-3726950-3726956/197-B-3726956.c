#include<stdio.h>
void reducing(int n, int d)
{
     int max,p,q,i,n1,d1;
     if(n<0) n1=(-1)*n;
     else n1=n;
     if(d<0) d1=(-1)*d;
     else d1=d;
     if(n1>d1) max = n1;
     else max=d1;
     p=n1;
     q=d1;

     for(i=2;i<=max;i++)
     {
      if(n1%i ==0 && d1%i ==0)
      {
          while (n1%i ==0 && d1%i ==0)
        {n1/=i;
        d1/=i;}
        }
      }
      if(d<0 && n>0)
     printf("-%d/%d",n1,d1);
     if(d<0 && n<0)
     printf("%d/%d",n1,d1);
     if(n<0 && d>0)
     printf("-%d/%d",n1,d1);
     if(n>0 && d>0)
     printf("%d/%d",n1,d1);
}
int main(int argc, char *argv[])
{
    int n,m,a[100],b[100],i;
    scanf("%d %d",&n,&m);
    for(i=0;i<n+1;i++)
    scanf("%d",&a[i]);

    for(i=0;i<m+1;i++)
    scanf("%d",&b[i]);


    if(n>m)
    {
        if(a[0]*b[0]>0) printf("Infinity");
        else  printf("-Infinity");
    }
    if(n==m)
    {
        reducing (a[0],b[0]);
    }
    if(n<m)
    printf("0/1");
    return 0;
}
