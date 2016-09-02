#include<stdio.h>
int main(int argc, char *argv[]) {
	long int a,m,i=1;
	scanf("%ld",&a);
	while(1) {
		m=a+1;
		while(m) {
			if(m%10==8) {
				printf("%ld",i);
				return 0;
			}
			else m=m/10;
		}
		a++;
		i++;
	}
	return 0;
	}
	
