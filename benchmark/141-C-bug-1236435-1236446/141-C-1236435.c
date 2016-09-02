#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main(int argc, char *argv[]) {
    int n, i, j, t, k, h[3000], max = 1;
	scanf("%d",&n);
	int a[3000];
	for (i = 0;i < 3000;i++,h[i] = 0);
	char s[3000][10], c;
	char name[3000][10];
	for (i = 0;i < n;i++) scanf("%s%d",s[i],&(a[i]));
	for (i = 0;i < n-1;i++) {
	    for (j = i+1;j < n;j++) {
		    if (a[i] > a[j]) {
			    t = a[i];
				a[i] = a[j];
				a[j] = t;
			    for (k = 0;k < 10;k++) {  
			        c = s[i][k];
				    s[i][k] = s[j][k];
				    s[j][k] = c;
				}
			}
		}
	}
	t = 0;
	for (i = 0;i < n;i++) {
	    t += a[i] > i ? 1:0;
	}
    if (t == 0) {
	    for (i = 0;i < n;i++) {
            for (j = i;j > i - a[i];j--) {
			    h[j] = h[j-1];
			}
			h[i - a[i]] = i;
		}		
		for (i = 0;i < n;i++) h[i] = h[i]*3000+i;
		qsort(h,n,sizeof(int),compare);
		for (i = 0;i < n;i++) h[i] = h[i]%3000;
		for (i = 0;i < n;i++) printf("%s %d\n",s[i],h[i]+1);
    } else printf("-1\n");
	return(0);
}
