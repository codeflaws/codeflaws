#include<stdio.h>
int main(int argc, char *argv[]){
    int n,k,i,j,p=2;
    scanf("%d%d",&n,&k);
    if(2*k+1>n)printf("-1\n");else{
    printf("%d\n",(n*(n-1))/2);
    for(i=1;i<=n;i++)
           for(j=1;j<=k;j++){
               printf("%d ",i);
               if(i+j>n){printf("%d\n",i+j-n);}
               else printf("%d\n",i+j);
           }}
    return 0;
}