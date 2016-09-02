#include <stdio.h>
int main(int argc, char *argv[])
{
    int n,m,i,k,j,g;
    scanf("%d%d",&n,&k);
    int a[n][2];
    for(i=0;i<n;i++)
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i][0]<a[j][0])
            {
                m=a[i][0];
                a[i][0]=a[j][0];
                a[j][0]=m;
                
                g=a[i][1];
                a[i][1]=a[j][1];
                a[j][1]=g;
            }
            else if(a[i][0]==a[j][0] && a[i][1]<a[j][1])
            {
                g=a[i][1];
                a[i][1]=a[j][1];
                a[j][1]=g;
            }
        }
    }
    int count=0;
    for(i=0;i<n;i++)
    {
        if(a[k-1][0]==a[i][0] && a[k-1][1]==a[i][1])
        count++;
    }
    printf("%d",count);
    return 0;
}