/*************************************************************************
    > File Name: 371C.c
    > Author: Stomach_ache
    > Mail: 1179998621@qq.com 
    > Created Time: 2013年12月10日 星期二 18时45分51秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define max(x,y) ((x)>(y)?(x):(y))

typedef long long ll;
int nb, ns, nc, pb, ps, pc, cb, cs, cc;
ll r;
char str[105];

int ok(ll x) {
	ll tmp = x * cb - nb, rr = r;
	if (tmp * pb > rr || rr < 0)
		return 0;
	if (tmp > 0)
		rr -= tmp * pb;

	tmp = x * cs - ns;
	if (tmp * ps > rr || rr < 0)
		return 0;
	if (tmp > 0)
		rr -= tmp * ps;

	tmp = x * cc - nc;
	if (tmp * pc > rr || rr < 0)
		return 0;
	if (tmp > 0)
		rr -= tmp * ps;
	
	return 1;
}

int main(int argc, char *argv[]) {
	while (~scanf("%s", str)) {
		scanf("%d %d %d", &nb, &ns, &nc);
		scanf("%d %d %d", &pb, &ps, &pc);
		scanf("%lld", &r);
		int i;
		cb = cs = cc = 0;
		for (i = 0; i < strlen(str); i++) {
			if (str[i] == 'B')
				cb++;
			else if (str[i] == 'S')
				cs++;
			else
				cc++;
		}
		ll lf = 0, rg = 10*r+cb+cs+cc, ans = 0;
		while (lf <= rg) {
			ll mid = (lf + rg) >> 1;
			if (ok(mid)) {
				ans = mid;
				lf = mid + 1;
			}
			else
				rg = mid - 1;
		}
		printf("%lld\n", ans);
	}

	return 0;
}
