#include<stdio.h>
int main(int argc, char *argv[]){
    int a,b;
    scanf("%d%d",&a,&b);
    int cnt=0;
    while(a && b){
         cnt++;
         a--;
         b--;
    }
    if(a){
            printf("%d %d",cnt,a/2);
    return 0;
    }
    else if(b){
            printf("%d %d",cnt,b/2);
    }
}

