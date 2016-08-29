#include <stdio.h>
//#include <conio.h>


int main(int argc, char *argv[]){
	int a, b, s;
	scanf("%d %d", &a, &b);
	if (a > b) s = a; else s = b;
	if (s % 2 == 0) printf("Malvika"); else printf("Akshat");
return 0;
}
