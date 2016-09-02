#include<stdio.h>

int main(int argc, char *argv[])
{
    int n, k, i, pif=0, pis=0;
    scanf("%d", &n);
    int fs[n], chance1[n], chance2[n];
    int ss[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d", &fs[i], &ss[i]);
    }
    for(i=0;i<n;i++)
    chance1[i]=chance2[i]=0;
    i=1;
    while(i<=4)
    {
        if(fs[pif]<ss[pis])
        {
            chance1[pif++]=1;
        }
        else if(fs[pif]>ss[pis])
        {
            chance2[pis++]=1;
        }
        else
        {
            chance1[pif]=chance2[pis]=1;
            pif++;pis++;
        }
        i++;
    }
    pif=0;pis=0;
    for(i=0;i<n/2;i++)
    {
        chance1[i]=chance2[i]=1;
    }
    for(i=0;i<n;i++)
    printf("%d", chance1[i]);
    printf("\n");
    for(i=0;i<n;i++)
    printf("%d", chance2[i]);
    return 0;
}
