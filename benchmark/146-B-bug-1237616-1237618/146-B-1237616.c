#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int mask(int x){
    int k = 0, t = 1;
	while (x > 0) {
	    if (x % 10 == 7 || x % 10 == 4) {
		    k += x%10*t;
			t *= 10;
		}
		x = x/10;
	}
	return(k);
}

int main(int argc, char *argv[]) {
    int a, b, i;
	scanf("%d%d",&a,&b);
	i = a;
	while (mask(i) != b) i++;
	printf("%d",i);
	return(0);
}
