#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
	int n, m, k, i, s, ii, jj, fl = 0;
	scanf("%d %d %d", &n, &m, &k);
	ii = jj = 1;
	int kk = (n * m) / k;
	if ((n * m) % k != 0){
		for (i = 1; i < k; i++){
			printf("%d ", kk);
			s = 0;
			while (s != kk){
				printf("%d %d ", ii, jj);
				s++;
				if (fl == 0){
				    jj++;
				    if (jj > m){
					    ii++;
					    fl = 1;
					    jj--; 
				    }
			    }
			    else{
			    	jj--;
				    if (jj < 1){
					    ii++;
					    fl = 0;
					    jj++; 
				    }
			    }
			}
			printf("\n");
		}
		kk += (n * m) % k;
		s = 0;
		while (s != kk){
				printf("%d %d ", ii, jj);
				s++;
				if (fl == 0){
				    jj++;
				    if (jj > m){
					    ii++;
					    fl = 1;
					    jj--; 
				    }
			    }
			    else{
			    	jj--;
				    if (jj < 1){
					    ii++;
					    fl = 0;
					    jj++; 
				    }
			    }
			}
	}
	else{
	    for (i = 1; i <= k; i++){
			printf("%d ", kk);
			s = 0;
			while (s != kk){
				printf("%d %d ", ii, jj);
				s++;
				if (fl == 0){
				    jj++;
				    if (jj > m){
					    ii++;
					    fl = 1;
					    jj--; 
				    }
			    }
			    else{
			    	jj--;
				    if (jj < 1){
					    ii++;
					    fl = 0;
					    jj++; 
				    }
			    }
			}
			printf("\n");
		}		
	}
return(0);
}