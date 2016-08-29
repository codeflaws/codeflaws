#include <stdio.h>
#include <inttypes.h>

int map[2005][2005] = {0};
int64_t diax[4010] = {0}, diay[4010] = {0};

int main(int argc, char *argv[]){
    int n, i, j, p, q, x1, y1, x2, y2;
    scanf("%d", &n);
    int64_t max = 0, max1 = 0;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &map[i][j]);        
        }
    }
    
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            diax[i+j] += map[i][j];
            diay[i-j+n-1] += map[i][j];
        }
    }

/*  for(i=0; i<2*n-1; i++){
        printf("%d ", diax[i]);
    }
    printf("\n");

    for(i=0; i<2*n-1; i++){
        printf("%d ", diay[i]);
    }
    printf("\n");
*/    
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if((i+j)&1){
                if(max < diax[i+j]+diay[i-j+n-1]-map[i][j]){
                    max = diax[i+j]+diay[i-j+n-1]-map[i][j];
                    x1 = i, y1 = j;
                }
            }else{
                if(max1 < diax[i+j]+diay[i-j+n-1]-map[i][j]){
                    max1 = diax[i+j]+diay[i-j+n-1]-map[i][j];
                    x2 = i, y2 = j;
                }           
            }
        }
    }
    printf("%lld\n",max+max1);
    printf("%d %d %d %d\n",x1+1,y1+1,x2+1,y2+1);
    return 0;
}
