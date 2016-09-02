#include<stdio.h>
int main(int argc, char *argv[])
{
	long int m,n,i;
	scanf("%ld %ld",&n,&m);
	if(m==1 && n==1)
		i=1;
	else if(m<(1+n)/2 || (m==(1+n)/2 && n%2==0))
	i=m+1;
	else
		i=m-1;
	printf("%ld\n",i);
return 0;
}
