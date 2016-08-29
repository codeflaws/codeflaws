#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int n, p, q, k, t, cont, chrcont, chrcaux, x, y, i;
	cont = 0;
	scanf("%d %d %d", &n, &p, &q);
	char s[n];
	scanf("%s", s);
	if (q>p) {
		t = q;
		q = p;
		p = t;
	}
	if (n%p!=0)  {
		i = 0;
		t = n;
		while (t%q!=0) {
			t = t-p;
			cont = cont+1;
			if (t<1) {
				i = 1;
			}
		}
		x = cont;
		cont = 0;
		while ((t!=0) && (i!=1)) {
			t = t-q;	
			cont = cont+1;
		}
		y = cont;
		k = x+y;
		if (i==1) {
			if (t%q==0) {
				t = n;
				cont = 0;
				while (t!=0) {
					t = t-q;
					cont = cont+1;		
				}
				k = cont;
				printf("%d\n", k);
				chrcont = 0;
				for (cont=1;cont<=k;cont++) {
					for (i=chrcont;i<cont*q;i++) {
						printf("%c", s[i]);
						chrcont++;
					}
					printf("\n");
				}
			} else {
				printf("-1\n");
			}
		} else {
			chrcont = 0;
			chrcaux = 0;
			printf("%d\n", k);
			for (cont=1;cont<=x;cont++) {
				for (i=chrcont;i<cont*p;i++) {
					printf("%c", s[i]);
					chrcaux++;
					chrcont++;
				}
				printf("\n");
			}
			chrcont = 0;
			for (cont=1;cont<=y;cont++) {
				for (i=chrcont;i<cont*q;i++) {
					printf("%c", s[i+chrcaux]);
					chrcont++;				
				}
				printf("\n");		
			}		
		}
	} else {
		t = n;
		while (t!=0) {
			t = t-p;
			cont = cont+1;		
		}
		k = cont;
		printf("%d\n", k);
		chrcont = 0;
		for (cont=1;cont<=k;cont++) {
			for (i=chrcont;i<cont*p;i++) {
				printf("%c", s[i]);
				chrcont++;
			}
			printf("\n");
		}
			
	}
	return 0;
}
