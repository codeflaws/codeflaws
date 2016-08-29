#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[]){
    long    long int n,s=0,i,flag=1;
    scanf("%lld",&n);
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
        flag=0;
        break;}
    }
    if(flag==1)
    printf("%lld",n);
    else{
        s=n;
        for(i=2;i<=(n);i++){
            if(n==1)
            break;
            if(n%i==0){
                n=n/i;
                s=s+n;
                i=1;}       
        }
    printf("%lld",s);}
    return 0;
}