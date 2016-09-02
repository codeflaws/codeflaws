#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	long long n,a,min=1e9+1,sum=0,i;
	
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a);
		if(a%2 && a<min)
		min=a;
		sum+=a;
	}
    if(sum%2) sum-=min;
    printf("%lld\n",sum);
	
	
	
	
	
	return 0;
}
