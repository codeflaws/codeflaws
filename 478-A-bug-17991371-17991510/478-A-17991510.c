//#include <conio.h>
#include <stdio.h>


int main(int argc, char *argv[]){
	int i, a[5], s = 0;
	for (i = 0; i < 5; i++){
		scanf("%d", &a[i]);
		s += a[i];
	}
	if ((s % 5 == 0) && (s != 0)) printf("%d", s / 5); else printf("-1");
	return 0;
}
