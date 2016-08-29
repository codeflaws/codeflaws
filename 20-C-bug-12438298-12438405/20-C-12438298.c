#include<stdlib.h>
#include<stdio.h>
#define SWAP(r,b) {e=r; r=b; b=e; }
typedef struct a{
	int x,a;
	struct a *o;
}a;
a *A[100001], *p;  int Heap[100001][2],Q[100001],T[100001],m,n,e,i,k,y,s,w; char H[100001];
void yaz(int x){
	if(!x) return;
	yaz(T[x]);
	printf("%d ",x);
}
void ekle(int x, int y){
	int t=++m;
	while(t > 1 && y<Heap[t/2][1]){
		Heap[t][0] = Heap[t >> 1][0];
		Heap[t][1] = Heap[t >> 1][1];
		t/=2;
	}
	Heap[t][0] = x;
	Heap[t][1] = y;
}

int sil(){
	if(!H[Heap[1][0]]) { s = Heap[1][0]; w=0; }
	m--;
	int t=1;
	while(2*t <= m){
		int k=2*t;
		if(k+1<=m && Heap[k][1] > Heap[k+1][1])k++;
		if(Heap[t][1] > Heap[k][1]){
			SWAP(Heap[t][0],Heap[k][0]);
			SWAP(Heap[t][1],Heap[k][1]);
			t=k;
		}
		else
			break;
	}
}
int main(int argc, char *argv[]){
	scanf("%d %d",&n,&s);
	while(s--){
		scanf("%d %d %d",&i,&k,&y);
		if(i != k){
			p = (a *) malloc (sizeof(a)); p -> x = k; p -> a = y;
			p -> o = A[i] ? A[i] : NULL; A[i] = p;
			p = (a *) malloc (sizeof(a)); p -> x = i; p -> a = y;
			p -> o = A[k] ? A[k] : NULL; A[k] = p;
		}
	}s = 1;
	while(s != n){
		H[s] = w = 1;
		for(p = A[s]; p ; p = p -> o)
			if(!H[p -> x] && (!Q[p -> x] || Q[p -> x] >= Q[s] + p -> a))
				T[p -> x] = s, ekle(p -> x, (Q[p -> x] = Q[s] + p -> a));
		if(!m) break;
		while(w && m) sil();
	}
	if(s == n) yaz(n);
	else printf("-1");
	return 0;
}
