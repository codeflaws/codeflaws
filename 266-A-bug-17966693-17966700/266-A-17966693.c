#include <stdio.h>
//#include <conio.h>
#include <string.h>

int main(int argc, char *argv[]){
	char a[100];
	int i, s = 0;
	scanf("%s", &a);
	scanf("%d",i);
	for (i = 1; i < strlen(a); i++){
		if (a[i] == a[i-1]) s++;
	}
	printf("%d", s);
	return 0;
}
