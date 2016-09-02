#include<stdio.h>
int max(int a,int b){return a<b?a:b;}
int main(int argc, char *argv[]){int a,m,n,b;
scanf("%d%d%d%d",&n,&m,&a,&b);
printf("%d",max((n/m*b+(n%m)*a),n*a));}
