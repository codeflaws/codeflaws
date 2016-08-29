#include <stdio.h>
int main(int argc, char *argv[]){
	int n, i, tmp;
	unsigned long long a=0, b=0, c=0;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &tmp);
		a+=tmp;
	}
	for(i=0;i<n-1;i++){
		scanf("%d", &tmp);
		b+=tmp;
	}
	for(i=0;i<n-2;i++){
		scanf("%d", &tmp);
		c+=tmp;
	}
	printf("%I64d\n%I64d\n", a-b, b-c);
return 0;
}