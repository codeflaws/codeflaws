#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n , i , k , counter  = 1 , m;

    scanf("%d%d", &n , &k);
    m = n - 1;

    if((n % 2 == 0 && k % 2 == 1 && k!= 1 && n / 2 <= k) || n / 2 < k || n == 2){

			printf("%d", -1);

		} else {

			printf("%d\n", (n * k));

		    while(counter <= k){

			    for( i = 1; i <= n; i++){

			        if(i + counter <= n){

			        	printf("%d %d\n", i , (i + counter));

			        } else {

			        	printf("%d %d\n", i , (i - m));

			        }

			    }

			m--;
			counter++;


		    }
		}




    return 0;
}
