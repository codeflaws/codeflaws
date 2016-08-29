#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
    double a[100][2],b,c,d,dist,p;
    int i,j,n,k;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%lf",&a[i][j]);
        }
    }
    dist=0;
    for(i=0;i<n-1;i++)
    {
        b=(a[i][0]-a[i+1][0])*(a[i][0]-a[i+1][0]);
        c=(a[i][1]-a[i+1][1])*(a[i][1]-a[i+1][1]);
        d=b+c;
        dist=dist+sqrt(d);
    }
    p=(dist/50)*k;
    printf("%lf",p);
    return 0;
}
