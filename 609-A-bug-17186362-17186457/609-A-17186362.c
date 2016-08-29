#include<stdio.h>
int main(int argc, char *argv[]){
	int x,y,arr[105],top=0,i,j,h[100010]={0},s=0;
	scanf("%d %d",&x,&y);
	for(i=0;i<x;i++){
		scanf("%d",&arr[i]);
		h[arr[i]]++;
	}
	for(i=100005;i>=0;i--){
		while(h[i]){
			arr[s++]=i+1;
			h[i]--;
		}
	}
	s=0;
	for(i=0;i<x;i++){
		top+=arr[i];
		s++;
		if(top>=y){
			printf("%d",s);
			break;
		}
	}
return 0;
}
