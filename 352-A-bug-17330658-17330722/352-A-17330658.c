#include<stdio.h>
int n,a,q,w,t,x;
int main(int argc, char *argv[]){
	scanf("%d",&n);
	while(n--){
		scanf("%d",&a);
		t+=a;
		(a)?q++:w++;
	}
	x=q/9*9;
	if(!w)
		puts("-1");
	else{
		while(x--)printf("5");
		while(w--)printf("0");
	}
	return 0;
}
