#include<stdio.h>
int main(int argc, char *argv[]){
int n,p,q,a;
scanf("%d %d %d",&n,&p,&q);
a=n-p;
if (a>q)
printf("%d",a+1);
else printf("%d",a);
return 0;

}
