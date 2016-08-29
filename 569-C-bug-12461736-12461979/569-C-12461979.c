#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX (1L << 22)

char iscomp[MAX];

typedef long long ll;
void do_comp (void)
{
	int i;

	iscomp[1] = 1;

        for (i = 2; i < MAX; i++) {
                int     jx;
                int     sx;

                if (iscomp[i]) {
                        continue;
                }

		if (i * i > MAX) {
			break;
		}
                for (jx = i; (jx * i) < MAX ;jx++) {
                        sx = jx * i;
                        if (!iscomp[sx]) iscomp[sx] = 1;
                }
        }
}

int ispal (int inp)
{
	int	i, j;
	char	tmp[32];
	int	len;

	sprintf(tmp, "%d", inp);
	len = strlen(tmp)-1;
	
	for (i = 0, j = len; i <= j; i++, --j) {
		if (tmp[i] != tmp[j]) {
			return 0;
		}
	} 
	
	return 1;
}

int main(int argc, char *argv[])
{
	int	i,n = 1;
	int	p, q;
	int	npr = 0, npa = 0;
	int	ans = 0;

	do_comp();
	scanf ("%d%d", &p, &q);

	for (i = 1; i < MAX; i++) {
		npa += ispal (i);
		npr += !(iscomp[i]);

		if ((ll)q * npr <= (ll)p * npa) {
			ans = i;
		}
	}
	if (ans) {
		printf ("%d\n", ans);
	} else {
		puts ("Palindromic tree is better than splay tree");
	}
	
	return 0;
}
