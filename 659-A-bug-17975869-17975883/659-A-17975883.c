#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n,a,b,i,j;
    scanf("%d %d %d",&n,&a,&b);
    int cycle[n+1];
    if(b==0)
    {
        printf("%d",a);
    }
    else if(b>0)
    {
        j=a;
        for(i=0; i<abs(b); i++)
        {
            if(j>=n)
            {
                j=1;
            }
            else
            {
                j++;
            }
        }
        printf("%d",j);
    }
    else
    {
        j=a;
        for(i=0; i<abs(b); i++)
        {
            if(j==1)
            {
                j=n;
            }
            else
            {
                j--;
            }
        }
        printf("%d",j);
    }



    return 0;
}
