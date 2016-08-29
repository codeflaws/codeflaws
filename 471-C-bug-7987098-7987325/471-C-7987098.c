#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
    long long int n,i,j,count=0;
    scanf("%lld",&n);
    
    j=sqrt(n);
    for(i=1;i<=j;i++)
    {
        if((n+i)%3==0)
            count++;
    }
    
    printf("%lld\n",count);
    
    return 0;
}
