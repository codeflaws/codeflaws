#include <stdio.h>
#define min(a,b) (a)<(b) ? a: b
int main(int argc, char *argv[]){
    int n,k,sum=0,i,first=100001,d;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&d);
        if(d<0 && k>0)
            d*=-1,k--;
        sum+=d;
        first=min(first,d);
    }
    if(k&1)
         sum+=(-1)*first;
    printf("%d",sum);
   return 0;
}
