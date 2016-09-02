#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int s[100003];

int main(int argc, char *argv[])
{
	int a,b,m,r;
	int i=1;

	memset(s,0,sizeof(s));
	scanf("%d%d%d%d",&a,&b,&m,&r);
	r=(a*r+b)%m;
	while(s[r]==0){
		s[r]=i;
		r=(a*r+b)%m;
		i++;
	}

	printf("%d\n",i-s[r]);
	return 0;
}
