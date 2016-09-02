#include <stdio.h>

int second(int m){
	int i = 0;
	
	while(m > 0){
		m /= 2;
		i ++ ;
	}
	
	return i;
}

int power(int n){
	int i = 1;
	
	while(i <= n)
		i *= 2;
	
	return i/2;
}
int main(int argc, char *argv[]){
	int b, n, p, matches = 0, k, towels, bottles;
	
	scanf("%d %d %d",&n,&b,&p);
	
	towels = n*p;
	
	k = power(n);
	
	printf("k : %d\n",k);
	
	while(k > 1){
		matches += k/2;
		n = k/2 + n-k;
		k = power(n);
	}
	printf("macthes ! %d\n");
	
	bottles = (b*2+1)*matches;
	
	printf("%d %d\n",bottles, towels);

return 0;}

