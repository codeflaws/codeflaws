#include <stdio.h>
int min (int a,int b){
if(a>b) return b;
if(b>=a) return a;}
 int main(int argc, char *argv[]){
 int n ,m,i,a;
 scanf("%d",&n);
 scanf("%d",&m);
 a=min(m,n)+1;
 printf("%d\n",a);
 for(i=0;i<a;i++){
    printf("%d %d\n",i,a-1-i);
 }
 return 0;
 }
