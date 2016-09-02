#include<stdio.h>
int main(int argc, char *argv[])
{

    long int n,i,m,j,c,a[10002][2];
    scanf("%ld",&n);m=n;
    for(i=0;i<n;i++)
    {
        scanf("%ld%ld",&a[i][0],&a[i][1]);
    }
    for(i=0;i<n;i++)
    {

        c=a[i][1];for(j=0;j<n;j++)
        {
            if(c==a[j][0] && i!=j) m--;
        }
    }
    printf("%ld",m);return 0;
}
