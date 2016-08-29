#include<stdio.h>
#include<string.h>
int min(int,int);
int main(int argc, char *argv[])
{
    int n,m,sum=0,i,j,k,p,r,h,price=5000000;
    float f;
    scanf("%d",&n);
    int a[n][3];
      for(i=0;i<n;i++)
      { scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);}
      scanf("%d",&m);
        int b[m][3];
     for(i=0;i<m;i++)
     { scanf("%d%d%d",&b[i][0],&b[i][1],&b[i][2]);}

    for(i=0;i<n;i++)
    {
        p=2*(a[i][0]+a[i][1]);
        h=a[i][2];
         price=5000000;
        for(j=0;j<m;j++)
        {
            r=b[j][0]/h;
            if(r!=0)
            {r=r*b[j][1];
            f=(float)p/r;
            double d=ceil(f);
            int walp=d*b[j][2];
                price=min(walp,price);
                //printf("%d\n",price);
        }}

          sum=sum+price;
    }
          printf("%d",sum);
          return 0;
}

int min(int a,int b)
{
    return(a<b?a:b);
}
