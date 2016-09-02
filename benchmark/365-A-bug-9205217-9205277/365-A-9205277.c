#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	int n, k, num, i, sum = 0;
	char a[11];
	scanf("%d%d", &n, &k);
	while( n-- ){
		scanf("%s", a);
		num = 0;
		int b[10]={0};
		for( i = 0; i < strlen(a); i++)
			b[a[i] - '0'] = 1;
		for( i = 0; i <= k; i++)
			num += b[i];
		if( num == k+1 )
			sum++;
	}
	printf("%d\n", sum);
	return 0;
}