#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXNUM 500001

int main(int argc, char *argv[]){
	int n, m, p;
	char seq[MAXNUM];
	int next[MAXNUM];
	int pre[MAXNUM];
	char op[MAXNUM];
	int sidx, eidx, fidx, lidx; // start idx, end idx, first idx, last idx
	int temp = 0; // stack
	int i, j, k;

	// input & initialization
	scanf("%d %d %d\n",&n, &m, &p);
	scanf("%s",seq);
	scanf("%s",op);
	for(i = 0 ; i < n ; i++){
		next[i] = i+1;
		pre[i] = i-1;
	}

	// Do operations
	p--;
	fidx = 0;
	lidx = n - 1;
	for(i = 0 ; i < m ; i++){
		if(op[i] == 'L') p = pre[p];
		else if(op[i] == 'R') p = next[p];
		else{
			if(seq[p] == '('){
				sidx = p;
				j = p;
				temp = 1;
				while(temp){
					j = next[j];
					if(seq[j] == '(') temp++;
					else temp--;
				}
				eidx = j;
			}
			else{
				eidx = p;
				j = p;
				temp = 1;
				while(temp){
					j = pre[j];
					if(seq[j] == ')') temp++;
					else temp--;
				}
				sidx = j;
			}
			if(eidx == lidx){
				lidx -= eidx - sidx + 1;
				p = lidx;
			}
			else {
				p = next[eidx];
				next[pre[sidx]] = p;
				pre[p] = pre[sidx];
			}
			if(sidx == fidx)
				fidx = next[eidx];
		}
	}

	// output
	for(i = fidx ; i <= lidx ; i = next[i])
		printf("%c",seq[i]);
	printf("\n");

	return 0;
}
