#include <stdio.h>
#include <stdbool.h>
int main(int argc, char *argv[]) {
	int test;
	long long int n,l,r,p;
	scanf("%d",&test);
	while(test-->0)
	{
	scanf("%lld%lld%lld",&n,&l,&r);
	p=n/l;
	p=p*r;
	if(n<=p)
	printf("Yes\n");
	else
	printf("No\n");
	}
	return 0;
}
