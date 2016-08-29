#include <stdio.h>

int main(int argc, char *argv[]) {
	char i,j,m[3][4];
	for (i=0;i<3;i++)
		scanf("%s\n",m[i]);
	for (i=0;i<3;i++)
		for (j=0;j<=2;j++)
			if (m[i][j]!=m[2-i][2-j]) {
				printf("NO\n");
				return 0;
			}
	printf("YES\n");
	return 0;
}
