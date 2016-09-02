#include <stdio.h>
#include <string.h>

const int   arabar[]  = {  1,   4,    5,   9,    10,  40,  50,   90,  100, 400,  500, 900,  1000};
const char *romanar[] = { "I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
 
char *arab2roman(long long arab) {
        static char roman[100];
        const int m = sizeof(arabar)/sizeof(int)-1, arabmax=arabar[m];
        const char romanmax=romanar[m][0];
        int i, n;
        if(!arab) {
                *roman=0;
                return roman;
        }
        i=0;
        while(arab>arabmax) {
                roman[i++] = romanmax;
                arab      -= arabmax;
        }
        n=m;
        while(arab > 0) {
                if(arab >= arabar[n]) {
                        roman[i++] = romanar[n][0];
                        if(n&1)
                                roman[i++] = romanar[n][1];
                        arab -= arabar[n];
                } else
                        n--;
        }
        roman[i]=0;
        return roman;
}
 

int main(int argc, char *argv[]) {
	int a; scanf("%d", &a);

	char s[3]; scanf("%s", s);

	char cs[1001]; scanf("%s", cs);
	int i, n = strlen(cs);
	long long c = 0;
	for (i = 0; i < n; i++) {
		c = c * a;
		if ('0' <= cs[i] && cs[i] <= '9')
			c += cs[i] - '0';
		else
			c += cs[i] - 'A' + 10;
	}

	if (s[0] != 'R') {
		int b; sscanf(s, "%d", &b);

		int dn = 0, d[100];
		if (c == 0)
			d[dn++] = 0;
		while (c != 0) {
			d[dn++] = c % b;
			c /= b;
		}

		for (i = dn-1; i >= 0; i--)
			if (d[i] < 10)
				putchar(d[i] + '0');
			else
				putchar(d[i] - 10 + 'A');
	} else {
		puts(arab2roman(c));
	}

	return 0;
}

