#include<string.h>
#include<stdio.h>
int main(int argc, char *argv[]) {
	int a,b,c,i,top1,top2,x,top11,top22;
	scanf("%d",&x);
	for(i=0;i<x;i++){
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
		if(a==1){
			top1+=b;
			top2+=c;}
		else{ top11+=b;
			top22+=c;}}
	printf((top1>=top2)? "LIVE":"DEAD");
	printf("\n");
	printf((top11>=top22)? "LIVE":"DEAD");



	return 0;
}
