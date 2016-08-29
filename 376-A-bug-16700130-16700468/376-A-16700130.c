#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i=0,j=0;
    char lever[1000000]= {0};
    int pivot=0,max=0;
    int64_t moment_l=0,moment_r=0;

    gets(lever);
    max=strlen(lever);
    for (i=0; i<max; i++)
    {
        if (lever[i]=='^')
            pivot=i;
        else if (lever[i]=='=')
            lever[i]=0;
        else if (lever[i]=='\n')
            lever[i]=0;
        else
            lever[i]-='0';
    }
    for (i=0; i<pivot; i++)
    {
        moment_l+=lever[i]*(pivot-i);
    }
    for (i=pivot+1; i<strlen(lever); i++)
    {
        moment_r+=lever[i]*(i-pivot);
    }
//    printf("L=%d R=%d\n",moment_l,moment_r);
    if (moment_l>moment_r)
        printf("left");
    else if (moment_l<moment_r)
        printf("right");
    else
        printf("balance");
    return 0;
}
