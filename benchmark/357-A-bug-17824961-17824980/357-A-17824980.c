#include <stdio.h>

int main(int argc, char *argv[]){
    int m,i,x,y,h;
    int aaa=0,lll=0,ppp=0;
    scanf("%d",&m);
    int v[m+1];
    for(i=1;i<m+1;i++){
        scanf("%d",&v[i]);
        aaa+=v[i];
    }
    scanf("%d%d",&x,&y);
    for(i=1;i<m+1;i++){
        lll+=v[i];
        aaa-=v[i];
        if(((lll>=x)&&(lll<=y)) && ((aaa<=y)&&(aaa>=x))){
            ppp=i+1;
            break;
        }
    }
    printf("%d",ppp);
    return 0;
}





