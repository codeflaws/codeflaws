#include<stdio.h>
int main(int argc, char *argv[]){
    int n,m,a,b,i;
    scanf("%d%d",&n,&m);
    scanf("%d",&a);
    for(i=0;i<n;i++)
        scanf("%*d");
    scanf("%d",&b);
    if(n>m){
        (a*b<0)?printf("-Infinity"):printf("Infinity");
    }   
    else if(n<m){
    printf("0/1");
    }
    else if(n==m){
        int x,y,t;
        x=a;
        y=b;
 
    while(y!=0){
        t=y;
        y=x % y;
        x=t;
    }
    (b<0&&a>0)?printf("%d/%d",-a/t,-b/t):printf("%d/%d",a/t,b/t);
    }
    return 0;
}