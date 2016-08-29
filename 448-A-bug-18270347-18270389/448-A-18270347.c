#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	int i,j,a,b,n;
	int a1,a2,a3,b1,b2,b3;
	scanf("%d",&a1);
	scanf("%d",&a2);
	scanf("%d",&a3);
	scanf("%d",&b1);
	scanf("%d",&b2);
	scanf("%d",&b3);
	scanf("%d",&n);
	a=a1+a2+a3;
	b=b1+b2+b3;
	if (n >= (a-1)/5+1 + (b-1)/10+1) printf("YES");
	else printf("NO");
	
	return 0;
}
