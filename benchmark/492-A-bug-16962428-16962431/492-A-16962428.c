#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n,i,j,x=0,c=0;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
           x=x+j;

           printf("%d\n",x);

        if(x<=n)
            c++;
        else
            break;
    }

    printf("%d\n",c);




    return 0;
}
