#include <stdio.h>
int* dim( int tamanto );
void lectura ( int* ptr, int tamanto);
void rain(int* ptr, int tamanto );
int march( int* ptr, int tamanto);
int main(int argc, char *argv[]){
    int* tiles = NULL;
    int n = 0;
    int days = 0;
    int flag = 0;
    scanf("%d", &n);
    tiles = dim( n );

    lectura(tiles, n);
    do{
        rain( tiles, n );
        days++;
        flag = march( tiles, n);
    }while( flag == 0 );

    printf("%d", days);
    return(0);
}

int march ( int* ptr, int tamanto){
    int i;
    for( i = 0; i < tamanto - 1; i++){
        if ( *(ptr+i+1) <= 0 ){
            if( *(ptr+i+2) <= 0){
                return( 1 );
            }
        }
    }
    if ( *(ptr + (tamanto - 1) ) <= 0 ){
        return ( 1 );
    }
    return(0);
}

void rain( int* ptr, int tamanto){
    int i;
    for( i = 0; i < tamanto; i++){
        *(ptr+i)= ( *(ptr+i) - 1 );
    }
}


int* dim( int tamanto){
    int *ptr;
    ptr = (int*)malloc( tamanto * sizeof( int ) );
    return (ptr);
}

void lectura( int* ptr, int tamanto){
    int i;
    int aux = 0;
    for( i = 0; i < tamanto; i++){
        scanf("%d", &aux);
        *(ptr+i) = aux;
    }
}
