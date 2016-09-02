#include<stdio.h>
int m[5][5];
int cap(int n);
int iguales(int i);
int min(int x,int y);
int max(int x,int y);
int into(int v, int x, int y);
int ret(int n,int x,int y, int z);
int main(int argc, char *argv[]){
    scanf("%d %d %d %d %d %d",&m[0][0],&m[1][0],&m[0][1],&m[1][1],&m[0][2],&m[1][2]);
    if(iguales(0) || iguales(1)){
        printf("1");
    }else if(cap(0) || cap(1)){
        printf("2");
    }else{
        printf("3");
    }
    return 0;
}
int iguales(int i){
    return m[i][0]==m[i][1] && m[i][1]==m[i][2];
}
int cap(int n){
    return ret(n,0,1,2) || ret (n,1,2,0) || ret (n,2,0,1);
}
int ret(int n,int x,int y, int z){
    return m[n][x]==m[n][y] && !into(m[!n][z],m[!n][x],m[!n][y]);
}
int into(int v, int x, int y){
    return v>=min(x,y) && v<=max(x,y);
}
int min(int x,int y){
    if(x<y){
        return x;
    }else{
        return y;
    }
}
int max(int x,int y){
    if(x>y){
        return x;
    }else{
        return y;
    }
}
