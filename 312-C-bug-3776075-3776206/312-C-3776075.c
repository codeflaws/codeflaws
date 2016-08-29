#include<stdio.h>
int main(int argc, char *argv[]){
    long long int a,b,c,d,i;
    scanf("%I64d %I64d",&a,&b);
    if(((a*(a-1))/2)+1>b){
        c=-1000;
        for(i=0;i<a;i++){
            printf("0 %I64d\n",++c);
        }
    }
    else{
        printf("no solution\n");
    }
    return 0;
}