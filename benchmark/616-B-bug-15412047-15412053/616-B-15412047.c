#include <stdio.h>
int main(int argc, char *argv[])
{
    int m,n,i,j,k;
    long long int a[111][111],b[111],tmp,out;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                scanf("%I64d",&a[i][j]);
        }
        for(i=0;i<n;i++)
        {
            b[i]=a[i][0];
            for(j=1;j<m;j++)
            {
                if(a[i][j]<b[i])
                {
                    b[i]=a[i][j];
                }
            }
        }
        tmp=b[0];
        for(i=0;i<n;i++)
        {
            if(tmp<b[i])
            {
                tmp=b[i];
            }
        }
        printf("%%I64d\n",tmp);
    }
    return 0;
}
