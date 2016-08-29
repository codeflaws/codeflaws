#include<stdio.h>
int max(int x,int y);
int min(int x,int y);
int main(int argc, char *argv[]){
    int i,m,t,s;
    char r[101];
    scanf("%d %d",&m,&s);
    if(m*9>=s && s){
        r[m]='\0';
        t=s-1;
        for(i=m-1;i;i--){
            r[i]='0' + min(t,9);
            t=max(0,t-9);
        }
        r[i]='1' + t;
        printf("%s",r);
        t=s;
        printf(" ");
        for(i=0;i<m;i++){
            printf("%c",'0' + min(t,9));
            t=max(0,t-9);
        }
    }else{
        printf("-1 -1");
    }
}
int max(int x,int y){
    if(x>y){
        return x;
    }else{
        return y;
    }
}
int min(int x,int y){
    if(x<y){
        return x;
    }else{
        return y;
    }
}
