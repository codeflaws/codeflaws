#include <stdio.h>
#include <stdlib.h>

enum { MAX_RANGE = 1001 };

int main(int argc, char *argv[])
{
    unsigned int hash[ MAX_RANGE ] = { 0 };
    char s[ BUFSIZ ];
    char *p;
    
    if ( fgets( s, sizeof s, stdin ) != NULL ) {
        size_t i;
        int seq_found;
        int first;
        int printed;

        p = s;

        while ( *p && *p != '\n' ) {
              unsigned long num;

              num = strtoul( p, &p, 10 );
              hash[ num ]++;
              p++;

         }
         
         seq_found = 0;
         for ( i = 1; i < sizeof hash / sizeof *hash; i++ ) {
             seq_found = 0;  
             first = 0;
             

             while ( i < sizeof hash / sizeof *hash && hash[ i ] > 0 ) {
                   
                   if ( !seq_found ) {
                       if ( printed ) {
                           putchar( ',' );
                       }
                       printf( "%u", i );
                       first = 1;
                       seq_found = 1;
                       printed = 1;

                   } else {
                       first = 0;
                       seq_found++;
                   }                   
                   i++;
                   
             }

             if ( seq_found && !first ) {
                 printf( "-%u" ,i - 1 );
             } 

         }

    }
    return 0;
}
