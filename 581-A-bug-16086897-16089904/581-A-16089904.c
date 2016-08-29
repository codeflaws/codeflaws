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
    }
    else if(b){
            printf("%d %d",cnt,b/2);
    }
    else printf("%d 0",cnt);
return 0;
}

