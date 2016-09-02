# include <stdio.h>
# include <string.h>

int list[3][101];
int nlist[3];
int compare( int *a, int *b){ return *a - *b; }
int compareminus( int *a, int *b){ return *b - *a; }

int main(int argc, char *argv[]){
   int x, n, A, cont;
   scanf("%d", &n);
   memset( nlist, 0, sizeof( nlist ));
   for( x = 0; x < n; x++){
     scanf("%d", &A);
     if( A < 0 ) list[ 2 ][ nlist[2]++] = A;
     if( A == 0 ) list[ 1 ][ nlist[1]++] = A;
     if( A > 0 ) list[ 0 ][ nlist[0]++] = A;
   }
   if( nlist[ 0 ] == 0){
      if( nlist[ 2 ] <= 1) {
         if( nlist[ 1 ] > 0 ){ printf("0\n"); return 0;}
         else { printf("%d\n", list[2][0]); return 0;}
      } 	
   }
   cont = 0;
   for( x = 0; x < nlist[0]; x++){ if(cont != 0 ) printf(" "); cont++; printf("%d", list[ 0 ][x]);  }
   qsort( list[ 2 ], nlist[ 2 ], sizeof(int), compareminus);
   for( x = 0; x*2 + 1 < nlist[ 2 ]; x++){
   	   if(cont != 0 ) printf(" "); cont++; 
       printf("%d %d", list[2][x*2], list[2][x*2 + 1]);	
   }
   printf("\n");
   return 0;
}
