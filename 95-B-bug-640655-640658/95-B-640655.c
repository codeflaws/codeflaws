#include <stdio.h>
#include <string.h>
#define N 100000

char n[N + 1], bg[N + 5], eq[N + 5];
int cntb, cnte, st, flag, cntb4, cnte4, finallen, finallen, len;

void gogogo(char x)
{
	if(x == '4' || x == '7') {
		if(x == '4' && 2 * (cnte - cnte4) < len) {
			finallen = len;
			st = cnte;
			bg[cntb = 0, cntb++] = '7';
			cntb4 = cnte4;
		}
		if(x == '4' && 2 * cnte4 < len) {
			eq[cnte++] = '4';
			cnte4++;
		} else if(x == '7' && 2 * (cnte - cnte4) < len) {
			eq[cnte++] = '7';
		} else {
			flag = 0;
		}
	} else if(x < '4') {
		flag = 0;
		st = cnte;
		finallen = len;
		if(2 * cnte4 < len) {
			bg[cntb = 0, cntb++] = '4';
			cntb4 = cnte4 + 1;
		} else {
			bg[cntb = 0, cntb++] = '7';
			cntb4 = cnte4;
		}
	} else if(x < '7') {
		flag = 0;
		if(2 * (cnte - cnte4) < len) {
			finallen = len;
			st = cnte;
			bg[cntb = 0, cntb++] = '7';
			cntb4 = cnte4;
		}
	}
}
int main(int argc, char *argv[])
{
	int i;
	scanf("%s", n);
	finallen = len = strlen(n);
	cntb = cnte = st = 0;
	flag = 1;
	if(len&1) {
		flag = 0;
		bg[cntb++] = '4';
		cntb4++;
		finallen++;
	} else {
		bg[cntb++] = '4';
		bg[cntb++] = '4';
		cntb4 = 2;
		finallen += 2;
	}
	for(i = 0; i < len; i++) {
		if(2 * cntb4 < finallen) {
			bg[cntb++] = '4';
			cntb4++;
		} else {
			bg[cntb++] = '7';
		}
		if(flag) {
			gogogo(n[i]);
		}
	}
	eq[cnte++] = '\0';
	if(flag) printf("%s", eq);
	else {
		eq[st] = '\0';
		printf("%s", eq);
		bg[cntb++] = '\0';
		printf("%s", bg);
	}
	puts("");
	return 0;
}
