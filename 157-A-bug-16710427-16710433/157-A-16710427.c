#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
	// optimized code.
	int n,n2[31][31],m[31],m2[31],ct = 0,sum;
	scanf("%d",&n);
	for (int i = 0;i < n;i++) for (int j = 0;j < n;j++) scanf("%d",&n2[i][j]);
	for (int i = 0;i < n;i++)
	{
		sum = 0;
		for (int j = 0;j < n;j++) sum += n2[i][j];
		m[i] = sum;
		sum = 0;
		for (int j = 0;j < n;j++) sum += n2[j][i];
		m2[i] = sum;
	}
	for (int i = 0;i < n;i++) for (int j = 0;j < n;j++) if (m2[i] > m[j]) ct++;
	printf("%d\n",ct);
	system("pause");
	return 0;
}