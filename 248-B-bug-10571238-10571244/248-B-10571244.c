#include<stdio.h>
#include<string.h>
char arr[15][4] = {{"020"},{"200"},{"110"},{"050"},{"080"},{"170"}};
int i,n;
int main(int argc, char *argv[]){
	
	scanf("%d",&n);
	if(n < 3) { puts("-1"); return 0; }
	if(n==3) { puts("210"); return 0; }
	printf("1");
	for(i=1;i<=n-4;i++)
		printf("0");
	
	printf("%s",arr[((n-1)%6)]);
	return 0;
}	
