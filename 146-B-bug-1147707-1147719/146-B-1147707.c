#include<stdio.h>
int mask(int n){
    if (n==0) return 0;
    else if (n%10==4||n%10==7) return n%10+mask(n/10)*10;
    else return mask(n/10);
}
int main(int argc, char *argv[]){
    int a,b,i;

    scanf("%d %d",&a,&b);
    for (i=a; ;i++){
        if (mask(i)==b) break;
    }
    printf("%d\n",i);
    return 0;
}
