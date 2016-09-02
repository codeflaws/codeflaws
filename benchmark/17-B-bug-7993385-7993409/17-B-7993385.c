#include <stdio.h>
int n,m,temp,max[2] = {-1,-1},i,a,b,c, x[1005],cevap=0;
int main(int argc, char *argv[]){
    scanf("%d", &n);
    for(i=1;i<1005;i++) x[i] = -1;
    for(i=1;i<=n;i++){
        scanf(" %d", &temp);
        if(temp==max[0]) max[1] = -1;
        if(temp>max[0]){
            max[0] = temp;
            max[1] = i;
        }
        
    }
    if(max[1] == -1) printf("-1");
    else{
        scanf(" %d", &m);
        for(i=0;i<m;i++) {
            scanf(" %d %d %d", &a,&b,&c);
            if(c>= x[b]) x[b] = c;
        }
        for(i=1;i<=n;i++){
            if(i!=max[1]){
                if(x[i]==-1){
                    printf("-1");
                    return 0;
                }
                cevap+=x[i];
            }
        }
        printf("%d", cevap);
    }
    return 0;
}