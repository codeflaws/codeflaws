#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


struct stud{
    long long f;
    long long p;
};

int comp(const void *a, const void *b){
	const struct stud *da = (const struct stud*)a;
	const struct stud *db = (const struct stud*)b;
	return da->f - db->f;
}

int main(int argc, char *argv[]){
    int n;
    scanf("%d",&n);
    struct stud arr[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%lld %lld",&arr[i].f,&arr[i].p);
    }
    qsort(arr,n,sizeof(struct stud),comp);
    long long best = -1;
    for(i = 0; i < n; i++) {
        if (best <= arr[i].p) {
		  best = arr[i].p;
	   } 
       else {
	 	 best = arr[i].f;
	   }
    }
    printf("%lld",best);
    return 0;
}
