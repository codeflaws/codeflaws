#include<stdio.h>
int n,a,q,w,x;
int main(int argc, char *argv[]){
	scanf("%d",&n);
	while(n--){
		scanf("%d",&a);
		(a)?q++:w++;
	}
	x=q/9*9;
	if(!w)
		puts("-1");
	else if(!x)
		puts("0");
	else{
		while(x--)printf("5");
		while(w--)printf("0");
	}
	return 0;
}
