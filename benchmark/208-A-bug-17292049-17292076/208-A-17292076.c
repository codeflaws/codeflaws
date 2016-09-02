#include <stdio.h>
int main(int argc, char *argv[])
{
	int e, c, i, f = 0;
	char a[200], x[100];
	scanf("%s", &a);
	i = 0;
	for (c = 0; a[c] != 0; c++){
		if (a[c] == 'W'&& a[c + 1] == 'U' && a[c + 2] == 'B'){
			c = c + 2;
			if (f == 1){ x[i] = ' ';
			i++;
			}
			f = 0;
		}
		else {
				x[i] = a[c];
				i++;
				f = 1;
		}
	}
	x[i] = '\0';

	printf("%s",x);
	return 0;
}