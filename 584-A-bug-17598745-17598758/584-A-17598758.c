#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[]){
    int i,n,t;
    scanf("%d %d", &n, &t);
    if(t<10){
        for(i=0;i<n;i++){
            printf("%d",t);
        }
    }
   else if(t==10 && n<2)
        printf("-1");
    else if(t==10 && n>=2){
            printf("1");
        for(i=1;i<=n-1;i++){
            printf("0");
        }
    }



return 0;
}
