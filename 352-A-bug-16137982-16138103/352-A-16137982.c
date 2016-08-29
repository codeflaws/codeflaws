#include<stdio.h>
int main(int argc, char *argv[]){
    int n,z=0,f=0,temp,i,a;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&temp);
        if(temp==0) z=z+1;
        else f=f+1;
    }
    if(f>=9 && z>0){
        a=f/9;
        for(i=1;i<=9*a;i++) printf("5");
        for(i=1;i<=z;i++) printf("0");
    }
    else printf("0");
return 0;
}
