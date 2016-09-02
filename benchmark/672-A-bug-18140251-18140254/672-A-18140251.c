#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	int i,j,k,n,m;
	char vec[2000];
	
	scanf("%d", &n);
	
	for( i = 0; i < 10; i++ ) {
		vec[i] = i+1 + '0';
	}
	m = 0;
	k = 1;
	do { 
		if( m == 0 ) {
			for( j = 0; j < 10; j++ ) {
				vec[i-1] = k + '0';
				vec[i] = j + '0';
				i+=2;
			}
		++k;
		if( k == 10 ) {
				k = 0;
				m = 1;
				--i;
			}
		}
		else {
			for( j = 0; j < 10; j++ ) {
				vec[i] = m + '0';
				vec[i+1] = k + '0';
				vec[i+2] = j + '0';
				i+=3;
			}
			++k;
			if( k == 10 ) {
				k = 0;
				++m;
			}	
		}
		
	} while( m < 4 );
	
	printf("%c", vec[n]);
	return 0;
}
