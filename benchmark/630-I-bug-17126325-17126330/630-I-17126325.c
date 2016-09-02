#include <stdio.h>
#include<math.h>
int main(int argc, char *argv[]){
long long int n;
	scanf("%lld",&n);
	printf("%lld\n",4*(2*3*pow(4LL,n-3LL)+(n-3LL)*3*3*pow(4LL,n-4LL)));
return 0;
}