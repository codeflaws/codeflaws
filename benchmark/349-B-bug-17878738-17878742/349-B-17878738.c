#include<stdio.h>
int main(int argc, char *argv[])
{
    int x,y,t,v,z;
    int Vec[10];
    scanf("%d",&v);
    for(x=y=1;x<=9;x++){
        scanf("%d",Vec+x);
        if(Vec[y]>=Vec[x]){
            y=x;
        }
    }
    if(v/Vec[y]>0){
        z=v/Vec[y];
        v=v%Vec[y];
        for(x=0;x<z;x++){
            for(t=9;t>y;t--){
                if(Vec[t]-Vec[y]<=v){
                    v=v-Vec[t]-Vec[y];
                    break;
                }
            }
            printf("%d",t);
        }
    }else{
        printf("-1");
    }
    return 0;
}
