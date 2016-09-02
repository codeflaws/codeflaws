#include <stdio.h>

char s[16] ;
int i,j,k, n,a,b,c,d;
int main(int argc, char *argv[])
{
    scanf("%d", &n) ;
    scanf("%s", &s) ;
    for(i=0; i < n ; i++)
    {
        if ( s[i] == '2')
        {
            a++ ;
            //   printf("for 2 : %d %d %d %d\n", a,b,c,d) ;
        }
        else if ( s[i] == '3')
        {
            b++ ;
            //   printf("for 3 : %d %d %d %d\n", a,b,c,d) ;
        }
        else if ( s[i] == '4')
        {
            a += 2 ;
            b ++ ;
            //      printf("for 4 : %d %d %d %d\n", a,b,c,d) ;
        }
        else if ( s[i] == '5')
        {
            c++ ;
            //   printf("for 5 : %d %d %d %d\n", a,b,c,d) ;
        }
        else if ( s[i] == '6')
        {
            b++ ;
            c++ ;
            // printf("for 6 : %d %d %d %d\n", a,b,c,d) ;
        }
        else if ( s[i] == '7')
        {
            d++ ;
            //   printf("for 7 : %d %d %d %d\n", a,b,c,d) ;
        }
        else if ( s[i] == '8')
        {
            a += 3 ;
            d ++ ;
            // printf("for 8 : %d %d %d %d\n", a,b,c,d) ;
        }
        else if ( s[i] == ' 9')
        {
            a ++ ;
            b += 2 ;
            d ++ ;
            //  printf("for 9 : %d %d %d %d\n", a,b,c,d) ;
        }
    }
//printf("%d %d %d %d\n", a,b,c,d) ;
    for (i=0; i < d ; i++)
    {
        printf("7") ;
    }
    for (i=0; i < c; i++)
    {
        printf("5") ;
    }
    for (i=0; i < b ; i++)
    {
        printf("3");
    }
    for (i=0; i < a ; i++)
    {
        printf("2");
    }
    return 0 ;
}
