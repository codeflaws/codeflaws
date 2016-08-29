#include<stdio.h>
int n,a[105],i=0,j=0,p,q,x;
int main(int argc, char *argv[]){
scanf("%d",&n);
for(x=1;x<n;x++){
scanf("%d",&a[x]);
if(a[x]%2) i++,p=x;
else j++,q=x;
}
printf("%d",i<j?p:q);return 0;
}
