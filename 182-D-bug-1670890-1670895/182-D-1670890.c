#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100000

char s1[N+2], s2[N+2];

int d(int i) {
	char c[N+1]={0}, *s;
	int ret=1;
	strncpy(c, s1, i);
	for(s=s1;*s;s+=i) if(strncmp(s, s1, i)) ret=0;
	for(s=s2;*s;s+=i) if(strncmp(s, s2, i)) ret=0;
	return ret;
}

int ndiv(void) {
	int l1=strlen(s1), l2=strlen(s2), i, ret=0;
	for(i=1;i<=l1&&i<=l2;++i) if(l1%i==0 && l2%i==0)
		ret+=d(i);
	return ret;
}

int main(int argc, char *argv[]) {
	fgets(s1, N+2, stdin);
	fgets(s2, N+2, stdin);
	s1[strlen(s1)-1]='\0';
	s2[strlen(s2)-1]='\0';
	printf("%d\n", ndiv());
	exit(0);
}
