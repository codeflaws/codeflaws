#include<stdio.h>
int main(int argc, char *argv[]){
    int d,n,x,i,t,say=0;
    scanf("%d%d%d",&d,&n,&t);
    for(i=1;i<=n-1;scanf("%d",&x),i++,t=x)
                    if(t!=d) say+=d-t;                
    printf("%d",say);

}
