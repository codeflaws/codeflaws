#include <stdio.h>
#include <string.h>

int min(int a,int b){
    if(a<b) return a;
    return b;
}
int main(int argc, char *argv[]){
    char ice[201];
    int tnum[10]={0,},num[10]={0,},i,t,cnt=10000000;
    scanf("%d%s",&t,ice);
    for(i=0;i<strlen(ice);i++){
        num[(int)(ice[i]-48)]++;
    }   
    while(t){
        tnum[t%10]++;
        t/=10;
    }
    num[2]+=num[5];
    num[6]+=num[9];
    tnum[2]+=tnum[5];
    tnum[6]+=tnum[9];
    for(i=0;i<10;i++){
        printf("%d %d\n",num[i],tnum[i]);
    }
    for(i=0;i<10;i++){
        if(tnum[i] && i!=5 && i!=9) cnt=min(cnt,num[i]/tnum[i]);
    }
    printf("%d",cnt);
    return 0;
}