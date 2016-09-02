#include <stdio.h>

#define SZ (26)

char A[SZ][SZ];

int f(int x1,int y1,int x2,int y2){
    int i,j;
    for(i=x1; i<=x2; i++)
    for (j=y1; j<=y2; j++)
    {
        if (A[i][j]=='1') return 0;
    }
    return 1;
}

int main(int argc, char *argv[]){
    int n,m;
    int i,j,k,l;
    int p;
    int max=0;
    
    scanf("%d", &n);
    scanf("%d", &m);
    for (i=0; i<n ;i++){
            scanf("%s", &A[i]);
    }

    for (i=0; i<n ;i++){
        for (j=0; j<m; j++) {
            for (k=i; k<n; k++){
                for (l=m-1; l>=j; l--){
                    if ((k-i+l-j) < max) continue;
                    if (A[k][l]) continue;
                    if (f(i,j,k,l)){
                        p = k-i+l-j;
                        if (p>max) max = p;
                        continue;
                    }
                }
            }
        }
    }
    
    printf("%d\n", (max+2)*2);
    
    return 0;
}
