#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a,const void *b) {
	return strcmp(*(char **)a,*(char **)b);
}

int main(int argc, char *argv[]) {
	char s[101];
	scanf("%s\n",s);
	int i,m,l=strlen(s);
	char *x[l],*p,*q;
	p=s;
	while (*p) {
		x[p-s]=p;
		p++;
	}
	qsort(x,l+1,sizeof *x,cmp);
	m=0;
	for (i=1;i<l;i++) {
		for (p=x[i],q=x[i-1];*p==*q;p++,q++) ;
		if (p-x[i]>m) m=p-x[i];
	}
	printf("%d\n",m);
	return 0;
}
