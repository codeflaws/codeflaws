#include<stdio.h>
#include<stdlib.h>

int min(int a, int b, int c){
    if(a<=c && a<=b) return a;
    if(b<=c && b<=a) return b;
    return c;
}

int main(int argc, char *argv[]){
    int n;
    int h[100005];
    scanf("%d", &n);
    int i;
    for(i=0; i<n; i++){
        scanf("%d", h+i);
    }
    int op[100005];
    op[0]=1;
    op[n-1]=1;
    for(i=1; i<n-1; i++){
        op[i]=min(h[i],i+1,n-i);
    }
    for(i=1; i<n-1; i++){
        op[i]=min(1+op[i-1],op[i],h[i+1]+1);
        op[n-i-1]=min(1+op[n-i],op[n-i-1],h[n-i-2]+1);
    }
    for(i=1; i<n-1; i++){
        op[i]=min(op[i-1]+1, op[i+1]+1, op[i]);
    }
    int max=0;
    for(i=0; i<n; i++){
        if(op[i]>max) max=op[i];
        printf("%d ", op[i]);
    }
    printf("%d", max);
    return 0;
}
