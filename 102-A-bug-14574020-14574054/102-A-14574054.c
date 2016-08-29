#include <stdio.h>
#include <limits.h>
#define MAX 101
//

int main(int argc, char *argv[]){
    int m , n;
    int i , j , k ;
    int x , y; //temp
    long min = LONG_MAX ;
    scanf("%d %d",&n,&m);
    int pairs[MAX][MAX] = {0} ; //bool array
    int clothesPrices[n];
    
    // clothesPrices[m] inputs..
    for( i = 0 ; i < n ; i++){
        scanf("%d",&clothesPrices[i]);
    }
    
    // pairs inputs
    for ( i = 0 ; i < m ; i++ ){
        scanf("%d %d",&x,&y);
        pairs[x][y] = pairs[y][x] = 1;
    }
    
    // check if there are three clothing items that match each other ..
    for ( i = 1 ; i < n ; i++){
        for ( j = i + 1 ; j <= n ; j++){
            for ( k = j + 1 ; k <= n ; k++ ){
                if ( pairs[i][j] && pairs[j][k] && pairs[k][i] ){
                    if ( clothesPrices[i-1]+clothesPrices[j-1]+clothesPrices[k-1] < min ){
                        min = clothesPrices[i-1]+clothesPrices[j-1]+clothesPrices[k-1];
                        //printf("%ld",min);
                    }
                }
            }
        }
    }
    if ( min!=LONG_MAX)
    printf("%ld \n",min);
    else printf("%d",-1);
    
    return 0;
 }