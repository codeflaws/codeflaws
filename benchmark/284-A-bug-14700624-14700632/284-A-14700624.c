#include<stdio.h>
int main(int argc, char *argv[])
{
    int prime;
    scanf("%d",&prime);

    long long int i, j, aux, q, count=0;

    for(i=1;i<prime;i++)
    {
        aux = 1;
        q = 0;
        for(j=1;j<prime-1;j++)
        {
            aux*=i;
            aux%=prime;
            if((aux-1)%prime==0)
            {
                q=1;
                break;
            }
        }
        aux*=i;
        if(q==0 && (aux-1)%prime==0)
            count++;
    }

    printf("%l64d",count);

    return 0;
}
