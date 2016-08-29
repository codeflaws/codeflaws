#include<stdio.h>
#include<stdlib.h>

int cmp (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main(int argc, char *argv[]){

	int n, m;
	int puz[50];
	int min = 1001;
	scanf("%d %d", &n, &m);
	for(int i = 0; i < m; i++){
		scanf("%d ",&puz[i]);
	}
	
	qsort(puz,m,sizeof(int),cmp);
	
	for(int i = 0; i < m-n; i++){
		int cur = puz[i+n-1] - puz[i];
		if(cur < min)
			min = cur;
	}
	min = min%1001;
	printf("%d\n",min);


	return 0;	
}