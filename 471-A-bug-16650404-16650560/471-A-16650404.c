#include <stdio.h>
int main(int argc, char *argv[])
{
    int L[6],i,j,tmp,R[10]={0,0,0,0,0,0,0,0,0,0},yes=0,yes2=0;
    for (i=0;i<6;i++)
    {
        scanf("%d",&L[i]);
        R[L[i]]++;
    }
    for (i=0;i<10;i++)
    {
        if (R[i]>=4)
            yes=1;
        if (R[i]==2)
            yes2=1;
    }
    if (yes)
    {
        if (yes2)
            printf("Elephant");
        else
            printf("Bear");
    }
    else
        printf("Alien");
    return 0;
}
