#include <stdio.h>

void sort_sheker(int count, int *mass);

int main(int argc, char *argv[]){

	int n;
	int arr[ 100 ];
	int i;
	int ch[ 100 ];
	int j = 0;
	int maxc = 0;
	int count = 0;
	
	scanf( "%d", &n );
	for ( i = 0; i < n; i++ )
		scanf( "%d", &arr[ i ] );
	sort_sheker( n, arr );
	
	if ( n == 1 ){
		printf( "YES" );
		return 0;
	}
	
	if ( n == 2 && arr[ 0 ] == arr[ 1 ] )
	{
		printf( "NO" );
		return 0;
	}else
	
	if ( n == 2 && arr[ 0 ] != arr[ 1 ] )
	{
		printf( "YES" );
		return 0;
	}
	
	
	for ( i = 0; i < n; i++ )
	{
		ch[ j ] = arr[ i ];
		count = 1;
		while ( arr[ i ] == ch[ j ] ){
			i++;
			count++;
		}
		
		
		
		if( maxc < count )
		{
			maxc = count;
		}	
		
		j++;
		i--;
	}
	
	
	count--;
	
	if ( maxc - 1 <= n - maxc )
		printf( "YES" );
		else
			printf( "NO" );
	
	return 0;
}

void sort_sheker(int count, int *mass) {
  int left, right;
  int t;
  int i;
  left = 0;
  right = count-1;
  int flag = 1;  // флаг наличия перемещений
  while((left < right) && flag > 0)  {
    flag = 0;
    for( i=left; i<right; i++) { //двигаемся слева направо
      if(mass[i]>mass[i+1]) {
        t=mass[i];
        mass[i]=mass[i+1];
        mass[i+1]=t;
        flag = 1;
      }
    }
    right--;
    for(i=right; i>left; i--) { //двигаемся справа налево
      if(mass[i-1]>mass[i]) {
        t=mass[i];
        mass[i]=mass[i-1];
        mass[i-1]=t;
        flag = 1;
      }
    }
    left++;
  }
  return;
}
