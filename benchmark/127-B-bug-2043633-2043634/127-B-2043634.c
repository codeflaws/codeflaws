#include <stdio.h>
int main(int argc, char *argv[])
{
    int n;
    scanf("%i",&n);
    int v[101],x,i;
    for(i=0;i<=100;i++)
    v[i]=0;
    for(i=0;i<n;i++)
    {
        scanf("%i",&x);
        v[x]++;
    }
    int c=0;
    for(i=1;i<=100;i++)
    c+=v[i]/2;
    printf("%i",c/2);
    return 0;
}
