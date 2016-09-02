#include <stdio.h>
#include <stdlib.h>
#define N 100001
#define M 1000001

typedef struct elem {
	int i, d;
} elem;

int compare (const void * a, const void * b) {
    elem *aa = (elem*)a;
    elem *bb = (elem*)b;
    if(aa->d < bb->d) {
        return -1;
    } else 
    if(aa->d > bb->d) {
        return 1;
    } else {
        return 0;
    }
}

elem a[N];
int kk[N];
int x[M];
int y[M];
int p = 0;

int main(int argc, char *argv[]) {
    
    int n, k, i, j, dd, m, q;    
    
    scanf("%d%d", &n, &k);    
    
    for(i=0; i<n; ++i) {
        scanf("%d", &dd);
		a[i].i = i+1;
		a[i].d = dd;
		kk[i] = 0;
    }
    
	qsort(a, n, sizeof(elem), compare);	
		
	if(a[0].d != 0) {
		printf("-1\n");
		return 0;
	} else if(n==1) {
		printf("0\n");
		return 0;
	} else {
		for(i=1; i<n; ++i) {
			if(a[i].d != a[0].d) break;
		}		
		if(i>1) {
			printf("-1\n");
			return 0;
		} else {
			dd = 0;			
			q = 0;			
			while(i<n) {
				if(a[i].d != dd+1) {
					printf("-1\n");
					return 0;
				} else { 					
					++dd;
					for(j=i; j<n; ++j) {						
						if(a[j].d == dd) {
							while(q<i && kk[q] >= k) ++q;
							if(q == i) {
								printf("-1\n");
								return 0;
							}
							++kk[q];
							x[p] = a[q].i;
							y[p] = a[j].i;
							++p;
						} else {
							break;
						}
					}
					q = i;
					i = j;					
				}
			}
		}
	}
	
	printf("%d\n", p);	
	for(i=0; i<p; ++i) {
        printf("%d %d\n", x[i], y[i]);	
    }
	
    return 0;
}