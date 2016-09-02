#include<stdio.h>

int arr[100005] = {0};

int main(int argc, char *argv[])
{
        int n, k, m , count[100005] = {0}, i, j, idx = 0, flag = 0, seconds = 0, exc = 0;

        scanf("%d%d", &n, &k );
        for(i = 0; i < k; i++){
                scanf("%d", &m);
                seconds = seconds + 2 * (m -1);

                for(j = 0; j < m; j++){
                        scanf("%d", &arr[idx]);
                        idx++;
                        if(flag == 0 && j == 0 && arr[idx-1] == 1){
                                flag = 1;
                        } else if(flag == 1){
                                if(arr[idx-1] == (arr[idx-2] + 1) ){
                                        exc++;
                                        if(j == m-1){
                                                seconds = seconds - (2 * (m-1));
                                        }
                                } else {
                                        seconds = seconds - ( 2 * (m - 1) );
                                        seconds += 2 * (( m - exc ) -1  );
                                        flag = 0;
                                }
                        }
                }
                flag = 0;
        }

        seconds += k-1;

        printf("%d\n", seconds);

        return 0;
}












