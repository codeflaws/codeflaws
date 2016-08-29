#include<stdio.h>
int main(int argc, char *argv[])
{
	int n, i, j, num, sum = 0;
	long a[1001];
	scanf("%d", &n);
	for( i = 0; i < n; i++)
		scanf("%d", a+i);
	for( i = 0; i < n; i++){
		num = 0;
		for( j = i+1; j < n;j++){
			if(a[j] == a[i]){
				num++;
				a[j] = 0;
			}
		}
		if(num > 1){
			printf("-1\n");
			return 0;
		}
		if(num)
			sum++;
	}
	printf("%d\n", sum);
	return 0;
}