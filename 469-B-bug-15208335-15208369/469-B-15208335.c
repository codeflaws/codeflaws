#include <stdio.h>

int max(int x, int y){
    if(x > y)
        return x;
    else
        return y;
}

int min(int v, int r){
    if(v > r)
        return r;
    else
        return v;
}

int main(int argc, char *argv[]){ freopen("in.txt", "r", stdin);
    long int i, p, q, l, r, a[60], b[60], c[60], d[60], j, k, ans = 0;
    scanf("%ld %ld %ld %ld", &p, &q, &l, &r);
    for(i = 0; i < p; i++){
        scanf("%ld %ld", &a[i], &b[i]);
    }
    for(i = 0; i < q; i++){
        scanf("%ld %ld", &c[i], &d[i]);
    }
    for(i = l; i <= r; i++){
    	int flag = 0;
    	for(j = 0; j < q; j++){
    		for(k = 0; k < p; k++){
    			if(max(a[k], c[j] + i) <= min(b[k], d[j] + i))
    				flag = 1;
    		}
      	}
    	ans += flag;
    }
    printf("%ld\n", ans);
    return 0;
}
