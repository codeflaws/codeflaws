#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n,m;
    scanf("%d %d",&n,&m);

    int sum=0,i=1,b;

    for(;;i++)
    {
        sum=sum+i;
        if(sum>m)
        {
            printf("%d",m-b);
            break;
        }

        b=sum;
        if(sum==((n)*(n+1))/2) i=0;


    }
    if(sum<=m) printf("0");

    return 0;
}
