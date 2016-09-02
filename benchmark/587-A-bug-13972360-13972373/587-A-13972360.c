#include <stdio.h>
#define BUF 2
#define MAX_P 1000050
int powers[MAX_P];
int N,res;

char ibuf[BUF];
int ipt = BUF;
int end;

int read_uint()
{
	while (ipt < end && ibuf[ipt] < '0') ipt++;
	if (ipt == BUF) {
		end = fread(ibuf, 1, BUF, stdin);
		ipt = 0;
		while (ipt < end && ibuf[ipt] < '0') ipt++;
	}
	int n = 0;
	while (ipt < end && ibuf[ipt] >= '0') n = (n*10)+(ibuf[ipt++]-'0');
	if (ipt == BUF) {
		end = fread(ibuf, 1, BUF, stdin);
		ipt = 0;
		while (ipt < end && ibuf[ipt] >= '0') n = (n*10)+(ibuf[ipt++]-'0');
	}
	return n;
}

int main(int argc, char *argv[])
{
	int a,b,m = -1,c;
	scanf("%d",&N);
	res = N;
	for(a = 0;a < N;a++){
		b = read_uint();
		powers[b]++;
		if(b > m)
			m = b;
	}
	for(a = 0;a <= m+20;a++){
		c = powers[a]/2;
		//powers[a] %= 2;
		powers[a + 1] += c;
		res -= c;
	}
	printf("%d",res);
	return 0;
}
