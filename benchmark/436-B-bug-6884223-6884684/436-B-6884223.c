#include <stdio.h>

int map[2001][2001] = {0};
//int cmap[2001][2001] = {0};
int ans[2001] = {0};
int n, m, k;
char ss[2001]; 

void show(){
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%d",map[i][j]);
        }
        printf("\n");
    }
}

/*void clear(){
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cmap[i][j] = 0;
        }
    }
}*/

int main(int argc, char *argv[]){
    int i, j, k;
    scanf("%d %d %d", &n, &m, &k);
    for(i=0; i<n; i++){
        scanf("%s",ss);
        for(j=0; j<m; j++){
            if(ss[j] == '.'){
                map[i][j] = 0;
            }else if(ss[j] == 'L'){
                map[i][j] = 1;
            }else if(ss[j] == 'R'){
                map[i][j] = 2;
            }else if(ss[j] == 'U'){
                map[i][j] = 4;
            }else{
                map[i][j] = 8;
            }
        }
    }

/*  for(i=0; i<n; i++){
//      show();
        clear();
        for(j=0; j<n; j++){
            for(k=0; k<m; k++){
                if(map[j][k]&1){
                    map[j][k]-=1;
                    if(k>0)cmap[j][k-1]+=1;
                }
                if((map[j][k]>>1)&1){
                    map[j][k]-=2;
                    if(k<m-1)cmap[j][k+1]+=2;
                }
                if((map[j][k]>>2)&1){
                    map[j][k]-=4;
                    if(j>0)cmap[j-1][k]+=4;
                }
                if((map[j][k]>>3)&1){
                    map[j][k]-=8;
                    if(j<n-1)cmap[j+1][k]+=8;
                }
            }
        }
        for(j=0; j<n; j++){
            for(k=0; k<m; k++){
                map[j][k] = cmap[j][k];
            }
        }

        for(j=0;j<m && i!=n-1;j++){
            if(map[i+1][j]){
                for(k=0; k<4; k++){
                    if((map[i+1][j]>>k)&1)ans[j]++;
                }
            }
        }
    }*/

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(map[i][j] == 1){
                if(i<=j)ans[j-i]++;
            }else if(map[i][j] == 2){
                if(i<m-j)ans[i+j]++;
            }else if(map[i][j] == 4){
                ans[j]++;   
            }else if(map[i][j] == 8){
                
            }
        }
    }
    printf("%d",ans[0]);
    for(i=1; i<m; i++){
        printf(" %d",ans[i]);
    }
    printf("\n");
    
    return 0;
}