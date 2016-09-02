#include <stdio.h>

int main(int argc, char *argv[])
{
    long long n, sum=0, z, i, k, j, b, flag=0;
    scanf("%I64d", &n);
    z=n;
    if(z%7==0)
    {
        for(i=1;i<=z/7;i++)
            printf("7");
        flag=1;
    }

    if(z%7!=0 && flag==0)
    {
        k=z/7;

        for(i=z-(k*7); k!=0; k--)
        {
            i=z-(k*7);
            //printf("\nk is %d", k);
            //printf("\npoop %I64d\n", i);

            if(i%4==0)
            {
                //printf("\n%d\n", i);
                flag=1;
                for(b=1;b<=i/4;b++)
                    printf("4");
                for(j=1;j<=k;j++)
                    printf("7");
            }
        }
    }
    if(z%4==0 && flag==0)
    {
        for(i=1;i<=z/4;i++)
            printf("4");
        flag=1;
    }
    if(flag==0)
        printf("-1");

    return 0;
}
