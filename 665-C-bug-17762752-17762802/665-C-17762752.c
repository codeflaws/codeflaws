#include <stdio.h>
#include <string.h>
#define MAX_N 200005

char s[MAX_N];
int dp[26][2];
char res[MAX_N][26];

int main(int argc, char *argv[])
{
	int a,b,c,d,e,f,min,N;
	scanf("%s",s);
	N = strlen(s);

	for(a = 0;a < 26;a++){
		if((s[0] - 'a' ) == a)
			dp[a][0] = 0;
		else
			dp[a][0] = 1;
	}

	for(a = 1;a < N;a++){
		d = s[a] - 'a';
		for(b = 0;b < 26;b++){
			if(b == d) e = 0;
			else e = 1;
			for(c = 0,min = MAX_N;c < 26;c++){
				if(b == c)
					continue;
				if((dp[c][(a-1)%2]+e) < min){
					min = dp[c][(a-1)%2]+e; 
					f = c;
				}
			}
			dp[b][a%2] = min;
			res[a][b] = f;
		}
	}
	for(a = 0,min = MAX_N;a < 26;a++)
		if((b = dp[a][(N-1)%2]) < min){
			min = b;
			c = a;
		}
	s[N-1] = (c + 'a');
	b = res[N-1][c];
	//BUG
	for(a = N-2;a >= 1;a--){
		s[a] = (b + 'a');
		b = res[a][b];
	}
	s[0] = (b + 'a');
	puts(s);
	return 0;
}
