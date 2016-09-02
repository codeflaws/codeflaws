#include<stdio.h>
#include<limits.h>
int is_duplicate(long ai, long *a, int n){
    int i;
    for(i=0; i<n; i++){
	if(a[i] == ai) return 1;
    }
    return 0;

}

int main(int argc, char *argv[]){
    int i, n;
    long long sum = 0, sump=0;
    long a[26];
    scanf("%d", &n);
    for(i=0; i<n; i++){
	scanf("%ld", &a[i]);
	CHECK : if(is_duplicate(a[i], a, i)){
	    if(a[i] == 0) break;
	    a[i]--;
	    goto CHECK;
	}
	sump = sum;
	sum = sump + a[i];
    }

    printf("%I64d", sum);
}