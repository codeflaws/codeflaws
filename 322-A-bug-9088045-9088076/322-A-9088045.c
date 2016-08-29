#include<stdio.h>

int main(int argc, char *argv[]){
	int n,m,i;

	scanf("%d%d", &n, &m);
	printf("%d\n", n +m - 1);

	for(i=1;i<=n;i++){
		printf("%d %d\n", i, 1);
	}

	for(i=2;i<=m;i++){
		printf("%d %d\n", 2, i);
	}

	//system("pause");
	return 0;
}