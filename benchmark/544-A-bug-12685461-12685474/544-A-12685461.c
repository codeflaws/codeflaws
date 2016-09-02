#include <stdio.h>
#include <string.h>

int  i , j , k , n, a[27] ,q, d , w;

char s[101] , p[27];


int main(int argc, char *argv[])
{
    scanf("%d", &k);
    getchar();
    scanf("%s", &s);
    n = strlen(s);

    for( i = 0 ; i < n ; i ++ )
    {
        w = s[i] - 'a';
        a[w]++;

        if ( a[w] == 1 )
        {
            p[d] = s[i];
            d++;
        }

    }
    q = 1;
    if ( d < k ) printf("NO");



    else
    {
        for( i = 0 ; i < n; i++)
        {
        if( s[i] != p[q] || q == k  )
        {
            printf("%c", s[i] );
        }
        else
        {
            printf("\n");
            q++;
            i--;
        }
        }
    }
  return 0;
  }
