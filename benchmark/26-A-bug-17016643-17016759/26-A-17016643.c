	#include <stdio.h>
	#include <stdlib.h>
	int main(int argc, char *argv[])
	{
	int MAX_PRIME = 3000;
	int* num = calloc(MAX_PRIME+1,sizeof(int));
	int N;
	scanf("%d",&N);
	int cnt = 0;
	int i,j;
	for(i=2;i*i<=MAX_PRIME;i++)	
	    if(!num[i])		    
			for(j=i*2;j<=MAX_PRIME;j+=i)
		    	num[j]++;	
	    
	for(i=1;i<=N;i++)
		cnt += (num[i]==2)?1:0;

	printf("%d\n", cnt);
	return 0;
	}
