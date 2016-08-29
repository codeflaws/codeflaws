#include<stdio.h>

int main(int argc, char *argv[]){

int x,n,i,a=0;

scanf("%d%d",&n,&x);

for(i=0,n*=2;i<n && x!=a && x!=7-a;i++) scanf("%d",&a);

if(x==a || x==7-a) printf("NO\n"); else printf("YES\n");
return 0;
}
