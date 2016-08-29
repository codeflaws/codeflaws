#include<stdio.h>
#include<string.h>
#define maxn 100000
int readchar(){
	for(;;){
		int ch = getchar();
		if(ch != '\n' && ch != '\r') return ch;
	}
}
int main(int argc, char *argv[]){
	int a[5], sum = 0;
	scanf("%d%d%d%d", &a[1], &a[2], &a[3], &a[4]);
	printf("%d %d %d %d\n",a[1],a[2],a[3],a[4]);
	sum = a[readchar() - '0'];
	for(;;){
		char ch = getchar();
		if(ch != '\n' && ch != '\r'){
			sum += a[ch - '0'];
			//printf("%d\n", sum);
		}
		else break;
	}
	printf("%d\n", sum);
	return 0;
}
