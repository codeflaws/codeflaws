#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    long long int n;
    scanf("%I64d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n-i>0)
        {
            n=n-i;
            continue;
        }
        
        else
        {
            //printf("%I64d",n);
            break;
        }
    }
    printf("%I64d",n);
    return 0;
}