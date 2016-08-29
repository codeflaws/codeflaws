#include <stdio.h>

int main(int argc, char *argv[]) {
    int t,p,n,i,j,count;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&p);
        count=0;
        for(i=2;i<=n;i++){
            for(j=1;j<n;j++){
              if(count<(2*i+p)){
              printf("%d %d\n",j,i);
              count++;
              }
           }
       }
    }
    return 0;
}