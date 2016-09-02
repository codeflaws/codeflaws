#include <stdio.h>
#include <stdlib.h>

int t[100000],p[100000],x[100000];

int cmp(const void *a,const void *b) {
	int l=*(int *)a;
	int r=*(int *)b;
	return 2/t[r]*p[r]-2/t[l]*p[l];
}

int main(int argc, char *argv[]) {
	int i,N,V,P,T,min=-1;
	scanf("%i %i\n",&N,&V);
	P=0;
	T=0;
	for (i=0;i<N;i++) {
		scanf("%i %i\n",&t[i],&p[i]);
		x[i]=i;
		T+=t[i];
		P+=p[i];
	}
	// printf("%i %i %i\n",V,T,P);
	if (T>V) {
		P=0;
		qsort(x,N,sizeof *x,cmp);
		for (i=0;V>=t[x[i]];i++) {
			V-=t[x[i]],P+=p[x[i]];
			if (t[x[i]]==1) min=x[i];
		}
		// printf("# %i %i\n",V,i);
		if (V&&min>=0)
			if (p[min]>p[x[i]]) min=-1;
			else {
				P+=p[x[i]]-p[min];
				// printf("$$$ %i %i %i %i\n",p[x[i]],x[i],p[min],min);
				i++;
			}
		else min=-1;
	} else i=N;
	printf("%i\n",P);
	while (i) {
		i--;
		if (x[i]!=min) printf("%i ",x[i]+1);
	}
	printf("\n");
	return 0;
}
