#include<stdio.h>
int x,mx,i;
int main(int argc, char *argv[]){
	scanf("%d",&x);
	for(mx = i = 0; i * 7 < x;i++)
		if((x - i * 7) % 4 == 0)
			mx = i;

	if((x - mx * 7) % 4 != 0) { printf("-1"); return 0; }

	for(i = 0;i < (x - mx * 7) / 4;i++)
		printf("4");

	for(i = 0;i < mx ;i++)
		printf("7");

	return 0;
}


