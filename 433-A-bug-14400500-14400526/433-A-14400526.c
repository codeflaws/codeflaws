#include<stdio.h>

int main(int argc, char *argv[])
{
    int n,ara[200],i,count1=0,count2=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n;i++){
        sum+=ara[i];
        if(ara[i]==100){
            count1++;
        }
        if(ara[i]==200){
            count2++;
        }
    }
    if(count1==n){
        if(count1%2==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    else if(count2==n){
        if(count2%2==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    else{
       if((sum/100)%2==0){
         printf("YES\n");
       }
       else{
        printf("NO\n");
       }
    }
    return 0;
}