#include<stdio.h>
int main(int argc, char *argv[]){
    int c1,c2,c3,c4;
    scanf("%d%d%d%d",&c1,&c2,&c3,&c4);
    int n,m;
    scanf("%d%d",&n,&m);
    int i;
     int sumb = 0;
    int sumt = 0;
    for ( i = 0 ; i < n ; i ++){
        int fofbusi;
        scanf("%d",&fofbusi);
        int k = (fofbusi*c1 > c2 ) ? c2 : fofbusi*c1;
        sumb += k;
    }
    for ( i = 0 ; i < m ; i ++){
        int ftrol;
        scanf("%d",&ftrol);
        int k = (ftrol*c1 > c3 ) ? c3 : ftrol*c1;
        sumt += k;
    }
    if ( c3 < sumb ){
        sumb = c3;
    }
    if ( c3 < sumt ){
        sumt = c3;
    }
     int final;
    if ( c4 < sumb + sumt){
        final = c4;
    }
    else{
        final = sumb + sumt;
    }
    printf("%d\n",final);
    return 0;
}
