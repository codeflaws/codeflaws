#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int n , k , d , j , i;
    scanf("%d%d%d",&n,&k,&d);
    int arr[100000];
    int exp = d , base = k;
    long long value = 1;
    if(k < n)
    {
        while (exp!=0)
        {
            value*=base;
            if(value >= n)
                break;
            exp--;
        }
        if(value < n)
        {
            printf("-1");
            return 0;
        }
    }

    for( i = 0 ; i < n ; i++)
        arr[i] = i;
    for( j = 0 ; j < d ; j++)
    {
        for( i = 0 ; i < n ; i++)
        {
            printf("%d ",(arr[i]%k)+1);
            arr[i] = arr[i]/k;

        }
        printf("\n");

    }
    return 0;
}