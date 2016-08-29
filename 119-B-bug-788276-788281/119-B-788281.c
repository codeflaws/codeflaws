#include<stdio.h>
#include<stdlib.h>

void quick_sort( int *Left, int idx1, int idx2 ){
    if( idx1 >= idx2 )
        return;

    int i, pivot = Left[idx1], final_idx = idx1;

    for( i=idx1+1; i<idx2; i++ )
        if( Left[i] < pivot ){
            final_idx++;

            int temp = Left[final_idx];
            Left[final_idx] = Left[i];
            Left[i] = temp;
        }

    Left[idx1] = Left[final_idx];
    Left[final_idx] = pivot;

    quick_sort( Left, idx1, final_idx );
    quick_sort( Left, final_idx + 1, idx2 );
}

int main(int argc, char *argv[]){
    int i, j, n, k, q, n_div_k;
    int sum_max = 0, sum_min = 100000;
    scanf( "%d %d", &n, &k );

    n_div_k = (int) ( n/k );

    int A[n], Used[n];
    for( i=0; i<n; i++ ){
        scanf( "%d", &A[i] );
        Used[i] = 0;
    }
    scanf( "%d", &q );
    int actual_q = q;

    int val, sum_temp, next = 0;
    for( i=0; i<q; i++ ){
        next = 0;
        sum_temp = 0;
        for( j=0; j<n_div_k; j++ ){
            scanf( "%d", &val );

            if( Used[val-1] == 1 ){
                next = 1;
            }else{
                Used[val-1] = 1;
                sum_temp += A[val-1];
            }
        }

        if( !next ){
            if( sum_temp > sum_max )
                sum_max = sum_temp;

            if( sum_temp < sum_min )
                sum_min = sum_temp;
        } else{
            actual_q--;
        }
    }

    q = actual_q;

    int Left[n - q*n_div_k];
    int idx = -1;
    for( i=0; i<n; i++ )
        if( !Used[i] )
            Left[++idx] = A[i];

    if( n - q*n_div_k >= n_div_k  && q < k ){

        quick_sort( Left, 0, n - q*n_div_k );

        int sum_temp_min = 0, sum_temp_max = 0;
        for( i=0; i<n_div_k; i++ ){
            sum_temp_min += Left[i];
            sum_temp_max += Left[ n - q*n_div_k - 1 - i ];
        }

        if( sum_temp_max > sum_max )
            sum_max = sum_temp_max;
        if( sum_temp_min < sum_min )
            sum_min = sum_temp_min;
    }

    printf( "\n%.10f %.10f", ( (double)sum_min )/n_div_k, ( (double)sum_max )/n_div_k );

    return 0;
}
