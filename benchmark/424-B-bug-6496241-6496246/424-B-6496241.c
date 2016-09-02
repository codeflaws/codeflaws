#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
    double n,s,a[1001][3],b[1001],dist,temp;
    int i,j,l=0,k=0,c[10001],temp1;
    scanf("%lf%lf",&n,&s);
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        scanf("%lf",&a[i][j]);
        scanf("%d",&c[i]);
        dist=sqrt(a[i][0]*a[i][0]+a[i][1]*a[i][1]);
        b[k++]=dist;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(b[j]>b[j+1])
            {
                temp=b[j];temp1=c[j];
                b[j]=b[j+1];c[j]=c[j+1];
                b[j+1]=temp;c[j+1]=temp1;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        if(s<1000000)
        {
            s=s+c[i];
            if(s==1000000)
            {printf("%.7lf",b[i]);
            break;}
        }
    }
    if(s<1000000)
    printf("-1");
    return 0;
    
}
