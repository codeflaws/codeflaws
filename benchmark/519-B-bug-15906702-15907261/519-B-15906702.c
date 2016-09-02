#include <stdio.h>
int main(int argc, char *argv[]){
	int n,top=0,i,h,top1=0,top2=0;
	for(i=1;i<=n;i++){
		scanf("%d",&h);
		top+=h;}
	for(i=2;i<=n;i++){
		scanf("%d",&h);
		top1+=h;}
	for(i=3;i<=n;i++){
		scanf("%d",&h);
		top2+=h;}
	printf("%d\n%d",top-top1,top1-top2);



	return 0;
}
