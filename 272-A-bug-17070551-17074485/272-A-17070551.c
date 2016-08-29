#include<stdio.h>
int main(int argc, char *argv[])
{
    int n,i,j,a[110],sum=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }
    for(i=1;i<=5;i++)
    {int c=0;
       for(j=1;j<=5;j++)
    {
        if(sum+i==n*j+1)
            c++;
    }
    if(c==0)
        k++;
    }
    printf("%d",k);


return 0;
}
