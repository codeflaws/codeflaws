#include<stdio.h>
int main(int argc, char *argv[]){
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c); int order;
    if(a==0 || b==0 || c==0){
    printf("Impossible");
    return 0;
    }
    int max=a;
    order=1;
    if(b>max){
        max=b; order=2;}
    if(c>max){
        max=c; order=3;}
    int i;
    for(i=0;i<=max;i++){
    if(order==1 && (b-i)==(c-(max-i)) && (b-i)>=0){
    printf("%d %d %d",i,b-i,max-i);
    return 0;
    }
    if(order==1 && (c-i)==(b-(max-i)) && (c-i)>=0){
    printf("%d %d %d",max-i,b-i,i);
    return 0;
    }
    if(order==2 && (a-i)==(c-(max-i)) && (a-i)>=0){
    printf("%d %d %d",i,max-i,a-i);
    return 0;
    }
    if(order==2 && (c-i)==(a-(max-i)) && (c-i)>=0){
    printf("%d %d %d",max-i,i,c-i);
    return 0;
    }
    if(order==3 && (a-i)==(b-(max-i)) && (a-i)>=0){
    printf("%d %d %d",a-i,max-i,i);
    return 0;
    }
    if(order==3 && (b-i)==(a-(max-i)) && (b-i)>=0){
    printf("%d %d %d",a-i,i,max-i);
    return 0;
    }
    }
    printf("Impossible");


}
