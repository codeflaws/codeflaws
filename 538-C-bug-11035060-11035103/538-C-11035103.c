#include<stdio.h>
#include<limits.h>

int main(int argc, char *argv[])
{
	int n,m,max = INT_MIN,x,hi,di,hi_1,di_1;
	scanf("%i %i",&n,&m);

	scanf("%i %i",&di,&hi);

	//y = hi + di-x, x = 1
	max = hi + di-1;
	
	while( m>1 )
	{
		scanf("%i %i",&di_1,&hi_1);
		
		x = ( di+di_1 + hi_1-hi )/2;
		if( !( di<=x && x<=di_1 ) )
		{
			printf("IMPOSSIBLE\n");
			return 0;
		}

		max = ( max<(hi+x-di) ? (hi+x-di) : max ) ;

		hi = hi_1;
		di = di_1;
		m -= 1;
	}

	// y = hi + x-di, x = n
	max = ( max<(hi+n-di) ? (hi+n-di) : max ) ;

	printf("%i\n",max);
	
	return 0;
}

