#include<stdio.h>

int main(int argc, char *argv[])
{
    int n,ara[100005],i,min,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    min=ara[0];
    for(i=0;i<n;i++){
        if(ara[i]<=min){
            min=ara[i];
        }
    }
    if(n==1){
        printf("%d\n",ara[0]);
    }
    else{
    for(i=0;i<n;i++){
        if((ara[i]%min)==0){
            count++;
        }
    }
    if(count==n){
        printf("%d\n",min);
    }
    else{
        printf("-1\n");
    }
    }
    return 0;
}