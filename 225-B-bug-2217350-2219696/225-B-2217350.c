#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int s,k,t,x;
int memo[9999],ans,c[9999],p;

int make_k_bonacci(int k){
    int i,j;
    memo[k] = 1;
    for(i=k+1;;i++){
        for(j=1;j<=k;j++){
            memo[i] += memo[i-j];
            if(memo[i]<0) return i;
        }
    }
}

int main(int argc, char *argv[]){
    scanf("%d%d",&s,&k);
    t=k;
    if(k>=32){
        x = __builtin_popcount(s);
        if(x==1){
            printf("2\n0 %d\n",s);
            return 0;
        }
        printf("%d\n",x);
        while(s){
            t=s&-s;
            printf("%d ",t);
            s^=t;
        }
        puts("");
        return 0;
    }
    int z = make_k_bonacci(k);
    t=s;
    while(z--&&s){
        if(s>=memo[z]&&memo[z]!=t){
            ans++;
            c[p++]=memo[z];
            s-=memo[z];
        }
    }
    printf("%d\n",ans);
    while(p--)printf("%d ",c[p]);
    puts("");
    return 0;
}
