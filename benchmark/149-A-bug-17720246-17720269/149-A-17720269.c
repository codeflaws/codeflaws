#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n ,i,month=0,l,size=0,max,j;
    int ara[12];
    scanf("%d",&l);
    for(i=0;i<12;i++)
        scanf("%d",&ara[i]);
    if(l==0)
    {
        printf("0\n");

    }
    else{

    while(1)
    {

         max=0;

        for(i=0;i<12;i++)
        {
            if(ara[i]>=max)
                {max=ara[i];
                j=i;
                }

        }


                size=size+max;


                ara[j]=0;


                month++;
                if(size>=l)
                {
                    printf("%d\n",month);
                    break;
                }
                if(month>12)
                {
                    printf("-1\n");
                    break;
                }

    }
    }
    return 0;
}



