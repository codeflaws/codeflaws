#include<stdio.h>
int main(int argc, char *argv[]){
	int x,y,i,top=0,a,s=0;
	scanf("%d %d",&x,&y);
	for(i=0;i<x;i++){
		scanf("%d",&a);
		top+=a;
	}
	if(top<0)
		while(top<0){
			top+=y;
			s++;
		}
	else
		while(top>0){
			top-=y;
			s++;
		}
	printf("%d",(s)?s:1);
	return 0;
}
