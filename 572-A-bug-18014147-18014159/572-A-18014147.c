#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX 100100

int na,nb,k,m,i,j,result;

int A[MAX];
int B[MAX];
int SA[MAX];
int SB[MAX];

void _sort(int *x, int *s, int n) {
  int k,kk,z;
  int c[10];
  int t[MAX];

  for(i=1; i<=n; i++) s[i]=i;
  k=10; kk=1;
  for(i=1; i<=9; i++) {	
	for(z=0; z<10; z++) c[z]=0;
	for (j=1; j<=n; j++) {
            c[(x[s[j]]%k)/kk]++;
	}
	for(z=1; z<10; z++) c[z]=c[z]+c[z-1];

	for (j=n; j>=1; j--) {
	   z=(x[s[j]]%k)/kk;
	   t[c[z]]=s[j];
//	   xx[s[j]]=c[z];
	   c[z]--;
	}	
	for(j=1; j<=n; j++) s[j]=t[j];
        k*=10; kk*=10;
  }
}

void sort(int *x, int *s, int n) {
 int neg[MAX],negs[MAX];
 int pos[MAX],poss[MAX];
 int nn=0,np=0;
 for(i=1; i<=n; i++) 
   if(x[i]<0) neg[++nn]=-x[i]; else pos[++np]=x[i];

 _sort(neg, negs, nn);
 _sort(pos, poss, np);

 for(i=1;i<=nn;i++)     s[i]=-neg[negs[i]];
 for(j=1 ;i<=n;i++,j++) s[i]=pos[poss[j]];
}

void op() {
  if (result) printf("YES"); else printf("NO");
}

void inp() {
  char ch=0;
  scanf("%d", &na);
  scanf("%d", &nb);
  scanf("%d", &k);
  scanf("%d", &m);

  for (i=1; i<=na; i++) scanf("%d", &A[i]);
  for (i=1; i<=nb; i++) scanf("%d", &B[i]);
}

void compute() {
//  printf("\nsa[]=%d, sb[]=%d", A[SA[k]], B[SB[nb-m+1]]);
  result= (A[SA[k]]< B[SB[nb-m+1]]);
}

int main(int argc, char *argv[]) {
  clock_t t1=clock();
  
  inp();
  sort(A,SA,na);
  sort(B,SB,nb);
  compute();
  op();

  clock_t t2=clock();
  fprintf(stderr, "\ntime=%ld,%ld, %ld\n", t1,t2, t2-t1);

  return 0;
}

int main2() {
  clock_t t1=clock();

  scanf("%d", &na);
  for (i=1; i<=na; i++) scanf("%d", &A[i]);
  sort(A,SA,na);

printf("sorting A...\n");
  for (i=1; i<=na; i++) printf("%d ", SA[i]);
printf("\n");

  
}




