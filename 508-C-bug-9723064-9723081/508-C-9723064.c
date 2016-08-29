#include<stdio.h>

int main(int argc, char *argv[]){
    int m,t,r,ghost,candles[700][2]={0},light,ans=0,i,j,k;
    scanf("%d %d %d",&m,&t,&r);
    for(i=0;i<m;i++){
        scanf("%d",&ghost);
        if(ans==-1){
            continue;
        }
        if(candles[ghost+350][1]<r){
            light=r-candles[ghost+350][1];
            j=ghost+350-1;
            while(light>0){
                if(j+t<ghost){
                    break;
                }
                if(candles[j][0]==1){
                    j--;
                    continue;
                }
                candles[j][0]=1;
                light--;
                ans++;
                for(k=ghost+350;k<=j+t,k<700;k++){
                    candles[k][1]++;
                }
                j--;
            }
            if(candles[ghost+350][1]<r){
                ans=-1;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}
