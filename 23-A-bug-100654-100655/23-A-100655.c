#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

    char s[200];
    int i, j, k, l, p, out;
    char found;
    
    scanf("%s", &s );
    l = strlen( s );
    
    out = 0;
    found = 0;
    for( k = l-1; k > 0 && !found; k-- ){
         for( i = 0; i < l && !found; i++ ){
              for( j = i+1; j+k <= l; j++ ){
                   p = 0;
                   while( p < k && s[i+p] == s[j+p] ) p++;
                   if( p == k ){ out = k; found = 1; break; }
              }
         } 
    }
    printf("%d", out );

    return 0;   
}
