#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,m,h,i,a[1001],y=-1,z;
    scanf("%d %d %d",&n,&m,&h);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
        y+=a[i];    
    }
    n--;
    z=a[h-1]-1;
    float p = (float)(y-z)/y;
    for(i=1;i<n;i++)
        p*=(float)(y-z-i)/(y-i);
    if(n>y)
        printf("-1.0");
    else if(n==0)
        printf("0.0");
    else
        printf("%f",1-p);
    return 0;
}