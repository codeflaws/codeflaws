#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char s[11];
	int a[6], b[6], i, la = 0, lb = 0, s1, s2, j, t, x[10000];
	for (i = 0;i < 6;i++) a[i] = 0;
	for (i = 0;i < 6;i++) b[i] = 0;	
    scanf("%s",&s);
	for (i = 0;i < 10000;i++) x[i] = 0;
	i = 0;
	while (s[i] != ':') {
	    if (s[i] >= '0' && s[i] <= '9') a[i] = s[i] - '0';
		else a[i] = s[i] - 'A'+10;
		la++;
		i++;
	}
	i++;
	while (s[i] != '\0') {
	    if (s[i] >= '0' && s[i] <= '9') b[lb] = s[i] - '0';
		else b[lb] = s[i] - 'A'+10;
		lb++;
		i++;
	}
	for (i = 2;i < 10000;i++) {
	    s1 = 0;
		s2 = 0;
		t = 0;
	    for (j = 0;j < la;j++) {
		    if (a[j] >= i) t++;
		    s1 = s1*i+a[j];
		}
	    for (j = 0;j < lb;j++) {
		    s2 = s2*i+b[j];
			if (b[j] >= i) t++;
		}
		if (t == 0 && s1 < 24 && s2 < 60) x[i] = 1;
	}
	t = 0;
	for (i = 0;i <10000;i++) {
	    if (x[i] == 1) t++;
	}
	if (t > 1000) printf("-1\n");
	else {
	    if (t == 0) printf("0\n");
		else {
		    for (i = 0;i < 10000;i++) {
			    if (x[i] == 1) printf("%d ",i);
			}
			printf("\n");
		}
	}
	return(0);
}
