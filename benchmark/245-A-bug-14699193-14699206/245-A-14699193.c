#include<stdio.h>
#include<string.h>
/* x  y
a [ ][ ]
b [ ][ ]*/
int main(int argc, char *argv[]){
    int n,t,x,y,k;
    int m[2][2];
    memset(m,0,16);
    scanf("%d",&n);
    for(k=0;k<n;k++){
        scanf("%d %d %d",&t,&x,&y);
        m[t-1][0]+=x;
        m[t-1][1]+=y;
    }
    printf("%d %d\n%d %d",m[0][0],m[0][1],m[1][0],m[1][1]);
    if(m[0][0]>=m[0][1]){
        printf("LIVE");
    }else{
        printf("DEAD");
    }
    printf("\n");
    if(m[1][0]>=m[1][1]){
        printf("LIVE");
    }else{
        printf("DEAD");
    }
    return 0;
}