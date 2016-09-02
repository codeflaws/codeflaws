#include <stdio.h>
#include <stdlib.h>
/*int comp(const void *a,const void *b)
{
    double l=*(const double*)a;
    double r=*(const double*)b;
    if(l<r)return -1;
    if(l>r)return 1;
    return 0;
}*/
int comp1(const void *a,const void *b)
{
    const double *l=a;
    const double *r=b;
    if(l[0]<r[0])return -1;
    if(l[0]>r[0])return 1;
    return 0;
}
double k[100000][2];
int main(int argc, char *argv[])
{
    long int n,i;
    double x1,x2,y,x,z,a;
    //int b=1;
    scanf("%ld%lf%lf",&n,&x1,&x2);
    for(i=0;i<n;i++)
    {
        scanf("%lf%lf",&k[i][0],&k[i][1]);
        x=k[i][0]*x1+k[i][1];y=k[i][0]*x2+k[i][1];
        k[i][0]=x;k[i][1]=y;
    }
    //printf("points x1 and x2\n");
    //for(i=0;i<n;i++)
    //{
      //  printf("%lf %lf\n",k[i][0],k[i][1]);
    //}
    qsort(k,n,sizeof(double)*2,comp1);
    //qsort(b,n,sizeof(double),comp);printf("sorted x1==\n");
    //for(i=0;i<n;i++)
    //{
      //  printf("%lf %lf\n",k[i][0],k[i][1]);
    //}
    //printf("sorted b is ==\n");
    //for(i=0;i<n;i++)
    //{
      //  printf("%lf\t",b[i]);
    //}
    z=k[0][1];i=1;
    while(k[i][0]==k[i-1][0])
        {
            if(k[i][1]>z)z=k[i][1];
            i++;if(i==n)break;
        }
    for(;i<n;i++)
    {
        while(k[i][0]==k[i-1][0])
        {
            //if(b==1){a=z;b=0;}
            if(k[i][1]<a){i=n+5;break;}
            if(k[i][1]>z)z=k[i][1];
            i++;
        }//b=1;
        if(i<n-1)
        if(k[i][0]==k[i+1][0]){a=z;}
        if(k[i][1]>=z)
        {
            z=k[i][1];
        }

        else break;
    }
    if(i==n)printf("no");
    else printf("yes");
    return 0;
}
