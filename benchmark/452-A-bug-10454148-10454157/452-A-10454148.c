#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//#include <conio.h>

int main(int argc, char *argv[]){
	int n,f7=0,g7=0,i,s7=0,j7=0,u7=0,l7=0;
	char b[9];
	scanf("%d", &n);
	scanf("%s", b);
	char Vaporeon8[] = { "vaporeon" };
	char Jolteon7[] = { "jolteon" };
	char Flareon7[] = { "flareon" };
	char Umbreon7[] = { "umbreon" };
	char Leafeon7[] = { "leafeon" };
	char Glaceon7[] = { "glaceon" };
	char Sylveon7[] = { "sylveon" };
	char Espeon6[] = { "espeon" };
	if (n == 6){
		printf("espeon");
	}
	else if(n==8){
		printf("vaporeon");
	}
	else if (n == 7){
		for (i = 0; i < n; i++){
			if (Jolteon7[i] == b[i])
				j7++;
			if (Flareon7[i] == b[i])
				f7++;
			if (Umbreon7[i] == b[i])
				u7++;
			if (Leafeon7[i] == b[i])
				l7++;
			if (Glaceon7[i] == b[i])
				g7++;
			if (Sylveon7[i] == b[i])
				s7++;
		}
		if (j7 > f7 &&j7 > u7 &&j7 > l7 &&j7 > g7 &&j7 > s7)
			printf("jolteon");
		if (f7 > j7 &&f7 > u7 &&f7 > l7 &&f7 > g7 &&f7 > s7)
			printf("flareon");
		if (u7 > j7 &&u7 > f7 &&u7 > l7 &&u7 > g7 &&u7 > s7)
			printf("umbreon");
		if (l7 > j7 &&l7 > f7 &&l7 > u7 &&l7 > g7 &&l7 > s7)
			printf("leafeon");
		if (g7 > j7 &&g7 > f7 &&g7 > u7 &&g7 > l7 &&g7 > s7)
			printf("glaceon");
		if (s7 > s7 &&s7 > f7 &&s7 > u7 &&s7 > l7 &&s7 > g7)
			printf("sylveon");
	}
	return 0;
}
