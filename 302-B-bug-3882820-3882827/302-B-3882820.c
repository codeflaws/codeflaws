#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n,m,i,j=0;
    long long int s[20000],a,b;
    s[0]=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        s[i]=s[i-1]+(a*b);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&a);
        while(s[j]<a)
        {
            j++;
        }
        printf("%d\n",j);
    }

    return 0;
}