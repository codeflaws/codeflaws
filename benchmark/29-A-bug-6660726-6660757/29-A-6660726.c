#include <stdio.h>
#include <stdlib.h>
#define dim 20001
int main(int argc, char *argv[])
{
    int zoo[dim];
    int escupe[dim];
    int l,se_escupen,k,camellos,x,d;
    scanf("%d",&camellos);
    for(l=0;l<dim;l++){
        zoo[l]=0;
        escupe[l]=0;
    }
    l=1;
    while(l<=camellos){
        scanf("%d",&x);
        scanf("%d",&d);
        zoo[x+10000]=l;
        escupe[x+d+10000]=l;
        l++;
    }
    se_escupen=0;
    for(l=0;l<dim;l++){
        if(zoo[l]!=0){
            if(escupe[l]!=0){
                k=0;
                while(zoo[k]!=escupe[l]){
                    k++;
                }
                if(zoo[l]==escupe[k]){
                        if(zoo[k]==escupe[l]){
                            se_escupen=1;
                        }
                }
            }
        }
    }
    if(se_escupen==1){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}
