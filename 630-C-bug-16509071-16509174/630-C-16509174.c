#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[])
{
    int i,n;
    long long int sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+pow(2,i);
    }
    printf("%lli\n",sum);
    return 0;
}

