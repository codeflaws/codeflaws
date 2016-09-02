#include <stdio.h>

void getPred(short *owner) {
	char buf[9];
	scanf("%s", buf);
	if(buf[0] == 'p')
		*owner = 0;
	else if(buf[0] == 's')
		*owner = 1;
	else
		*owner = 2;
}

short getWinner(short a, short b) {
	if(a == b)
		return -1;
	if(a == 0) {
		if(b == 1) return 1;
		return 0;
	}
	if(a == 1) {
		if(b == 0) return 0;
		return 1;
	}
	if(a == 2) {
		if(b == 0) return 1;
		return 0;
	}
}

int main(int argc, char *argv[]) {
	short f, m, s;
	short fS=0, mS=0, sS=0;
	getPred(&f);
	getPred(&m);
	getPred(&s);
	if(getWinner(f, m) == 0) fS++;
	if(getWinner(f, s) == 0) fS++;
	if(getWinner(m, s) == 0) mS++;
	if(getWinner(m, f) == 0) mS++;
	if(getWinner(s, f) == 0) sS++;
	if(getWinner(s, m) == 0) sS++;
	if(fS > mS && fS > sS) { printf("F"); return 0; }
	if(mS > fS && fS > sS) { printf("M"); return 0; }
	if(sS > fS && sS > mS) { printf("S"); return 0; }
	printf("?");	
	return 0;
}
