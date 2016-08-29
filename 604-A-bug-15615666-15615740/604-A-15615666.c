#include<stdio.h>
int max(int x,int y);
int main(int argc, char *argv[]){
    int m[5];
    int w[5];
    int i,r,h,s;
    for(i=r=0;i<5;i++){
        scanf("%d",&m[i]);
    }
    for(i=0;i<5;i++){
        scanf("%d",&w[i]);
    }
    scanf("%d %d",&h,&s);
    for(i=1;i<=5;i++){
        r+=max(i*50*3,(250-m[i-1])*2*i-50*w[i-1]);
    }
    r+=(h-s)*100-s*50;
    printf("%d",r);
}
int max(int x,int y){
    if(x>y){
        return x;
    }else{
        return y;
    }
}
