#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MODULO 1000000007

int ma[20][20];
int b[20], col[20];
int n;

long long sols[17] = {0,1,0,18,0,1800,0,670320,0,734832000,0,890786230,0,695720788,0,150347555,0};

long long dfs(int x, int k);
long long precalc();

int main(int argc, char *argv[]){
    
   	//precalc();

	int n;
	scanf("%d", &n);
	printf("%I64\n", sols[n]);

#ifdef _AT_HOME_
    system("pause");
#endif

    return 0;
}	

long long dfs(int x, int k){
	if (k>n){
		return 1;
	}
	int i;
	int t = 0;
	for (i=1;i<=n;i++){
		if (b[ma[k][i]] || col[i]) continue;
		b[ma[k][i]] = 1;
		col[i] = 1;
		t +=dfs(i, k+1);
		b[ma[k][i]] = 0;
		col[i] = 0;
	}
	return t;
}

long long precalc(){
	int tt;
	for (tt=1;tt<16;tt+=2){

		int i,j;
	    n = tt;

	    for (i=1;i<=n;i++){
	    	for (j=1;j<=n;j++){
	    		ma[i][j] = (i-1+j-1) % n + 1;
	    	}
	    }

	    long long sol = 0;
	    for (i=1;i<=1;i++){
	    	b[ma[1][i]] = 1;
	    	col[i] = 1;
	    	sol += dfs(i, 2);
	    	if (sol>MODULO){
	    		sol -= MODULO;
	    	}
	    	b[ma[1][i]] = 0;
	    	col[i] = 0;
	    }

	    sol *= n;
	    sol %= MODULO;

	    long long fak = 1;
	    for (i=2;i<=n;i++){
	    	fak *= i;
	    	fak %= MODULO;
	    }

	    sol *= fak;
	    sol %= MODULO;

	    printf("%I64d\n", sol);
	}
}