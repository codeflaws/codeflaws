#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int n1, n2, n3;
	scanf("%d%d%d", &n1, &n2, &n3);
	int b12=(n1+n2-n3)/2, b23=n2-b12, b13=n1-b12;
	if(b12<0 || b23<0 || b13<0 || (b12==0&&b23==0 || b12==0&&b13==0 || b23==0&&b13==0))
		printf("Impossible\n");
	else
		printf("%d %d %d\n", b12, n2-b12, n1-b12);

	return 0;
}
