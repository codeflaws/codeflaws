# include <stdio.h>

void make24 (int n){
	int i;
	if (n%2==0){
		for (i=n ; i>4 ; i-=2) printf ("%d - %d = 1\n",i,i-1);
		for (i=1 ; i<=(n-4)/2-1 ; i++) printf ("1 * 1 = 1\n");
		printf("3 + 2 = 5\n5 + 1 = 6\n4 * 6 = 24\n24 * 1 = 24");	
	}
	else{
		for (i=n ; i>7 ; i-=2) printf ("%d - %d = 1\n",i,i-1);
		for (i=1 ; i<=(n-7)/2-1 ; i++) printf ("1 * 1 = 1\n");
		printf("7 - 5 = 2\n3 - 2 = 1\n1 + 1 = 2\n2 - 2 = 0\n6 * 4 = 24\n1 * 0 = 0\n24 + 0 = 24");
	}
	return ;
}

int main(int argc, char *argv[])
{
	int n ;
	scanf ("%d", &n);
	if (n==1 || n==2 || n==3) printf ("NO");
	else{
		printf("YES\n");
		switch(n){
			case 4 : {printf("3 + 2 = 5\n5 + 1 = 6\n4 * 6 = 24"); break;}
			case 5 : {printf("5 * 4 = 20\n3 + 2 = 5\n5 - 1 = 4\n20 + 4 = 24"); break;}
			case 7 : {printf("7 - 5 = 2\n3 - 2 = 1\n1 + 1 = 2\n2 - 2 = 0\n6 * 4 = 24\n24 + 0 = 24"); break;}
			default : {make24(n); break;}
		}
	}
	return 0;
}