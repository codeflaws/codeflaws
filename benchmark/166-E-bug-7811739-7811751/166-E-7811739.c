#include <stdio.h>
#define MAXN 1000001
#define m 1000000007

long long int dn[MAXN],n;

void islem()
{
	int i;
	dn[2]=3;
	dn[3]=6;
	for ( i=4 ; i<=n ; i++ )
	{
		dn[i]=( ( dn[i-1]*2)%m ) + ( ( dn[i-2]*3 )%m );
		dn[i]%=m;
	}
	printf("%d\n",dn[n]);		
}

int main(int argc, char *argv[])
{
	scanf(" %d",&n);
	islem();
	return 0;
}
