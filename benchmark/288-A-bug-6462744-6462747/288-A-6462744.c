#include <stdio.h>
int main(int argc, char *argv[])
{
    int n , k;
    char i;
    scanf("%d %d",&n,&k);
    if ( n < k || k == 1 )	printf("-1");
    else if ( n == k )
        for ( i = 97 ; i < 97 + k ; i ++ )
            printf("%c",i);
    else
    {
        n -= k - 2;
        if ( n % 2 == 1 )
        {
            n = (n-1)/2;
            int j;
            for ( j = 0 ; j < n ; j ++ )
                printf("ab");
            printf("a");
        }
        else
        {
            n /= 2;
            int j;
            for (  j = 0 ; j < n ; j ++ )
                printf("ab");
        }
        for ( i = 99 ; i < 97 + k  ; i ++ )
            printf("%c",i);
    }
    return 0;
}
