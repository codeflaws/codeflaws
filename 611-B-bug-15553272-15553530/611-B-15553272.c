#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>


unsigned long long FindMax(unsigned  long long lData )
{
	unsigned long long lRet = 0x1;
	

	while( lRet < lData )
	{
		lRet <<= 1;	
	}	

	return lRet - 1;
}

int main(int argc, char *argv[])
{

	unsigned long long lInput1;
	unsigned long long lInput2;

	unsigned long long lTotalCnt = 0;
	unsigned long long lCheck;
	unsigned long long lMax ;
		
	unsigned long long i = 0x1;
	unsigned long long ii = 0x0;
	int iCnt = 0;
	
	scanf("%lld%lld",&lInput1,&lInput2);
	
	while( i < lInput2 )
	{
		i <<= 1;	
		iCnt++;
	}

	lMax = i - 1;

	i = 0x1;

	iCnt;	
	ii = iCnt;
	
	while( lCheck >= lInput1 )
	{
		lCheck = lMax - i ;
		if( lCheck >= lInput1 && lCheck <= lInput2 )
		{
			lTotalCnt++;
		}
		else if( lCheck < lInput1 )
			break;
			
		i <<= 1;	
		ii--;
		
		if( ii == 1 )
		{
			i = 0x1;
			lMax >>= 1;
			ii = iCnt-1;
			iCnt--;			
		}
	}
	
	printf("%lld\n",lTotalCnt);
	
}
