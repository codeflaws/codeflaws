#include <stdio.h>
int main(int argc, char *argv[])
{
	int n, a[30], h[30], c = 0;
	scanf("%d",&n);
	for (int i = 0; i < n; i++){
		scanf("%d", &h[i]);
		scanf("%d", &a[i]);
	}
	for (int j = 0; j < n; j++){
	for (int i = 0; i < n; i++){
		if (h[j] == a[i])c++;
	}
}
	printf("%d", c);
	return 0;
}