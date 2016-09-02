#include <stdio.h>
#include <stdlib.h>
#define MAXN 101;
#define MAXK 10201;
int main(int argc, char *argv[]){
	int k;
	int n;


	scanf("%d",&n);
	scanf("%d",&k);
	

	int max;
	if (n%2==0) max = (n/2)*(n);
	else max = ((n/2+1)*((n/2)+1))+(n/2)*(n/2);

	if (max>=k){
		printf("YES\n");	

		int i,j;
		for (i=0;i<n;i++){
			for (j=0;j<n;j++){
				if ((i+j)%2==0){	
					if (k){
						printf("L");
						k--;
					}else printf("S");
				
				}else printf("S");				
			}
			printf("\n");
		}
	}else printf("NO\n");

	return 0;
}