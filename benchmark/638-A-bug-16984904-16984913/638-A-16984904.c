#include <stdio.h>
int main(int argc, char *argv[]){
 int n,a;
 scanf("%d %d",&n,&a);
 if((a%2)==1){
 	printf("%d",(a/2)+1);
 }
 else{
 	printf("%d",(n/2)-a+1);
 }
 return 0;
}