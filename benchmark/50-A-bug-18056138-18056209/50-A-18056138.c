#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int m, n, i;
    scanf("%d %d",&m,&n);
    if(m%2==0&&n%2==0)
        i=(m/2)*n;
    if(m%2==0&&n%2!=0)
     i=(m/2)*n;
    if(n%2==0&&m%2!=0)
     i=(n/2)*m;
     if(n%2!=0 && m%2!=0)
     {
         if(n/2>0&&m/2==0)
         i=(n/2);
         else if(n/2==0&&m/2>0)
            i=m/2;
         else i=(m/2)*n+(m/2);
     }
     printf("%d",i);
    return 0;
}
