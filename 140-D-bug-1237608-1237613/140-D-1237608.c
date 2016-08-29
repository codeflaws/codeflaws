#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}


int main(int argc, char *argv[]) {
    int i, n, a[100], time = 0, res = 0, sum = 0;
	scanf("%d",&n);
	for (i = 0;i < n;i++) scanf("%d",&(a[i]));
	qsort(a,n,sizeof(int),compare);
	for (i = 0;i < n;i++) {
	    time += a[i];
		if (time > 350 && time <= 710) sum += time-350;
        if (time <= 710) res++;		
	}
	printf("%d %d\n",res,sum);
}
