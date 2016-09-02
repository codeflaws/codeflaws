#include<stdio.h>

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	while(n>0) {
		switch (n) {
			case 3: printf("abc");break;
			case 2: printf("ab");break;
			case 1: printf("a");break;
			default: printf("abcd");break;
		}
		n-=4;
	}

}
