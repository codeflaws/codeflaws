#include <stdio.h>
int main(int argc, char *argv[]) {
    int n,a,b,i,x[101]={0},y[101]={0},v=0,h=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&a,&b);
        x[a]++;y[b]++;}
    for(i=0;i<=100;i++){
        if(x[i]!=0) v++;
        if(y[i]!=0) h++;}
    printf("\n%d",v>h?h:v);
    return 0;
}
