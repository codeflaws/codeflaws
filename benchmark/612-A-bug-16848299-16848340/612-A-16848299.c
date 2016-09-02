#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]){
	//specify and read vars
	int n, p, q;
	char word[256];
	scanf("%d%d%d", &n, &p, &q);
	scanf("%s" , word);

	//block that verifies sum condition
	int ntemp = n;
	int ok = 0;
	while(ntemp >= p){
		if(ntemp % p == 0 || ntemp % q == 0){
			ok = 1;
			break;
		} else {
			ntemp = ntemp - q;
		}
	}





	ntemp = n;
	int xp = 0;
	int xq = 0;

	if(ok){
		while(ntemp >= p){
			if(ntemp % p == 0){
				xp = ntemp/p;
				break;
			} else {
				if(ntemp % q == 0){
					xq = ntemp/q;
					break;
				} else {
					ntemp = ntemp - q;
					xq++;
				}
			}
		}

		//printf("%d = %d*%d + %d*%d\n", n, xp, p, xq, q);

		int i = 0;
		int j = 0;


		for(i; i<xp; i++){
			int jtemp = j;
			for(j; j<jtemp+p; j++){
				printf("%c", word[j]);
			}
			printf("\n");
		}


		i=0;
		
		for(i; i<xq; i++){
			int jtemp = j;
			for(j; j<jtemp+q; j++){
				printf("%c", word[j]);
			}
			printf("\n");
		}


	} else { 
		printf("-1\n");
	}

	return 0;
}