#include<stdio.h>
int main(int argc, char *argv[]){
	int t;
	scanf("%d",&t);
	if(t%2==0 && t!=2)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
