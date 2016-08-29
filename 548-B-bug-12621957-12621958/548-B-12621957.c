#include<stdio.h>

int rowmax(int arr[][505], int row, int m)
{
        int count = 0, mx = 0, i, j;
        int flag = 0;

        for(i = 1; i<= m; i++){
                if(flag == 0 && arr[row][i] == 1){
                        count = 1;
                        flag = 1;
                } else if(flag == 1 && arr[row][i] == 1){
                        count++;
                } else if(arr[row][i] == 0){
                        flag = 0;
                        count = 0;
                }
                if(count > mx){
                        mx = count;
                }
        }

        return mx;
}


int main(int argc, char *argv[])
{
        int n, arr[505][505], i, j, m, q, qi, qj, max[505], mx, k;

        scanf("%d%d%d", &n, &m, &q);

        for(i = 1; i <= n; i++){
                for(j = 1; j<= m; j++){
                        scanf("%d", &arr[i][j]);
                }
        }

        mx = -1;
         for(k = 1; k <= n; k++){
                max[k] = rowmax(arr, k, m);
                printf("max[%d] = %d\n", k, max[k]);
                if(mx < max[k]){
                        mx = max[k];
                }
         }

        for(k = 0; k < q; k++){
                scanf("%d%d", &qi, &qj);

                if(arr[qi][qj] == 1){
                        arr[qi][qj] = 0;
                } else {
                        arr[qi][qj] = 1;
                }

                max[qi] = rowmax(arr, qi, m);
                mx = 0;

                for(i = 1; i  <= n; i++){
                        if(mx < max[i]){
                                mx = max[i];
                        }
                }

               printf("%d\n", mx);

        }



        return 0;
}










