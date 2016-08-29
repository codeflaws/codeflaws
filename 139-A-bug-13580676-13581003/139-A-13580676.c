#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int page,pageweek[8],i,sum=0;
    scanf("%d",&page);
    for(i=1 ; i<8 ; i++)
        scanf("%d",&pageweek[i]);
 i=1;
    while(page>0)
    {

        if(sum==7)
            sum=0;

        page-=pageweek[i];
        sum++;
        i++;

    }
    printf("%d",sum);
    return 0;
}
