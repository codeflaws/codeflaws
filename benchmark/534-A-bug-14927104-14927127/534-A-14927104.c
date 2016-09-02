#include "stdio.h"


int main(int argc, char* argv[])
{
    int n;
    int i;
    scanf("%d",&n);
    if(n==1 || n==2){
        printf("1\n");
        printf("1\n");
    }
    if(n==3){
        printf("2\n");
        printf("1 3\n");
    }
    else{
        printf("%d\n",n);
        for(i=2;i<=n;i++){
            if(i%2==0){
                
                printf("%d ",i);
            }
        }
        for(i=1;i<=n;i++){
            if(i%2!=0){
                printf("%d ",i);
            }
        }
    }
                

    return 0;
}