#include <stdio.h>
int main(int argc, char *argv[])
{
    long int n,k,sum=0;
    int m,j,i;
    scanf("%ld%ld",&n,&m);
    long int a[m][2];
    for(i=0;i<m;i++)
    {
        for(j=0;j<2;j++)
        scanf("%ld",&a[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(a[i][1]<a[j][1])
            {
                k=a[i][1];
                a[i][1]=a[j][1];
                a[j][1]=k;
            
                k=a[i][0];
                a[i][0]=a[j][0];
                a[j][0]=k;
            }
            
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i][0]<=n)
        {
            n=n-a[i][0];
            sum = sum + a[i][0]*a[i][1];
        }
        else
        {
            sum = sum + n*a[i][1];
            break;
        }
    }
    printf("%ld",sum);
    return 0;
}