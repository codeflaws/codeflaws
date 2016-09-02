#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char *argv[])
{
    int n,i,sum=1;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        sum+=i;
        sum=sum%n;
        printf("%d ",sum);
    }

    return 0;
}
