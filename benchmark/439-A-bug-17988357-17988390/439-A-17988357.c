#include <stdio.h>

int main(int argc, char *argv[])
{
    int n,d,a,sumd=0;
    scanf("%d %d",&n,&d);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        sumd+=a;
    }

    if(d>(sumd+(n-1)*10))
        printf("%d",(d-sumd)/5);
    else
        printf("-1");

    return 0;
}
