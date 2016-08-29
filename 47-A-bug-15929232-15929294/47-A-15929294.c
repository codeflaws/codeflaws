#include<string.h>
#include<stdio.h>
int main(int argc, char *argv[]) {
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		if((i*(i+1))/2==n){
			printf("YES");
			return 0;}
	printf("NO");


	return 0;
}
