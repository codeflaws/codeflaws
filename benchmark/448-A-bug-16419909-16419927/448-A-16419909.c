#include <stdio.h>

int main(int argc, char *argv[]) {
	int i,a,b,c,n,s;
	c=0;
	s=0;
	for (i=0;i<3;i++) {
		scanf("%d",&a);
		s+=a;
	}
	c+=(s+4)/5;
	s=0;
	for (i=0;i<3;i++) {
		scanf("%d",&b);
		s+=b;
	}
	c+=(s+9)/10;
	if (c>n) printf("NO");
	else printf("YES");
	return 0;
}
