#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n,i;
    scanf("%d",&n);
    if (n>4)
    {
        printf("%d\n",n);
        for (i=1;i<=n;i+=2)
    {
        printf ("%d ",i);
    }
    for (i=2;i<=n;i+=2)
    {
        printf ("%d ", i);
    }
    }
    if (n==4)
    {
        printf ("4\n3 1 4 2");
    }
    if (n==3)
    {
        printf ("2\n1 3");
    }
    if (n==2 || n==1)
        printf("1\n1");
    return 0;
}