#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char mat[101][101]; //
    int i, j, k, l, n, mid, midU, midB, ncasos,sum,cel;

//    scanf("%d",&ncasos);
        // printf("ncasos %d\n",ncasos);

//    for (k=0;k<ncasos;k++) {
        scanf("%d",&n);
        mid = n/2;
        midU = mid/2;
        midB = mid + (n-mid)/2;
        //printf("n=%d mid=%d midU=%d midB=%d\n", n, mid, midU, midB);
        sum=0;
        for (i=0; i<n; i++)
         for (j=0; j<n; j++){
             scanf("%d",&cel);
             if ((i == j) ||
                 (i == n-1-j) ||
                 (i == mid) ||
                 (j == mid)); //printf("[%d,%d]",i,j);
                 sum += cel;
        }
        printf("%d\n",sum);
//     }
return 0;
}
