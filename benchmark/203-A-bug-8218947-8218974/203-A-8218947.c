#include<stdio.h>

int main(int argc, char *argv[]){
    int x,t,a,b,da,db;
    scanf("%d%d%d%d%d%d",&x,&t,&a,&b,&da,&db);
    int aScore[t],bScore[t];
    int i;
    for(i=0;i<t;i++){
        aScore[i]=a-i*da;
        bScore[i]=b-i*db;
    }
    
    int j;
    for(i=0;i<t;i++){
        for(j=0;j<t;j++){
            if(aScore[i]+bScore[j]==x){
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");
    return 0;
}