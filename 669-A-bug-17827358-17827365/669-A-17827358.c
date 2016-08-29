#include <stdio.h>

int main(int argc, char *argv[]) {
	// your code goes here
	long int n,i,j;
	scanf("%ld",&n);
	j=2*n/3;
	i=n%3;
	if(i!=0)
	j++;
	printf("%ld\n",j);
	return 0;
}
