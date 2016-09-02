#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	char a[5001];
	int i, sum = 0, j;
	scanf("%s", a);
	int lenth = strlen(a);
	for(i = 0; i < lenth-3; i++){
		if( 'b' == a[i] && 'e' == a[i+1] && 'a' == a[i+2] && 'r' == a[i+3] )
			j = i;
		sum += j+1;
	}
	printf("%d\n", sum);
	return 0;
}