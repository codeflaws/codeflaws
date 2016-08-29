#include<stdio.h>

int main(int argc, char *argv[])
{
    int n,ara[1000],i,f=0,z=0,p;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n;i++){
        if(ara[i]==5){
            f++;
        }
    }
    z=n-f;
    p=f/9;
    if(p<1 && f==n){
        printf("-1\n");
    }
    else if(p<1){
        printf("0\n");
    }
    else{
            for(i=1;i<=p*9;i++){
                printf("5");
            }
            for(i=1;i<=z;i++){
                printf("0");
            }
    }
    return 0;
}