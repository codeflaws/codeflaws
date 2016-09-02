#include <inttypes.h>
#include <stdio.h>
#define MAXN 4
#define LL int64_t

LL AN[MAXN] = {0};

LL calc3(LL a, LL b, char opt) {
    if (opt == '+')
        return a+b;
    else
        return a*b;
}

LL calc2(LL arr[], char opt[]) {
    int a, b, c, d;
    LL min = 0x3f3f3f3f3f3f3f3f;
    for (a=0; a<4; a++)
        for (b=0; b<4; b++)
            for (c=0; c<4; c++)
                for (d=0; d<4; d++) {
                    if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) {
                        LL t1, t2;
                        t1 = calc3(arr[a], arr[b], opt[0]);
                        t1 = calc3(t1, arr[c], opt[1]);
                        t1 = calc3(t1, arr[d], opt[2]);
                        //printf("%" PRId64 " %c %" PRId64 " %c %" PRId64 " %c %" PRId64 "\n", arr[a], opt[0], arr[b], opt[1], arr[c], opt[2], arr[d]);
                        if (t1<min)
                            min = t1;

                        t1 = calc3(arr[a], arr[b], opt[0]);
                        t2 = calc3(arr[c], arr[d], opt[1]);
                        t1 = calc3(t1, t2, opt[2]);
                        //printf("%" PRId64 " %c %" PRId64 " %c %" PRId64 " %c %" PRId64 "\n", arr[a], opt[0], arr[b], opt[1], arr[c], opt[2], arr[d]);
                        if (t1<min)
                            min = t1;
                    }
                }
    return min;
}


int main(int argc, char *argv[]) {
    int i;
    char opt[3];

//#ifndef ONLINE_JUDGE
//    freopen("in2.txt", "r", stdin);
//    freopen("out2.txt", "w", stdout);
//#endif
    
    while (scanf("%" PRId64 "%" PRId64 "%" PRId64 "%" PRId64 "", &AN[0], &AN[1], &AN[2], &AN[3] )!=EOF) {
        int add=0, mul=0, k=1, n=4;
        //char op;
        LL *TEMP=AN, ans;

        for (i=0; i<3; i++) {
            getchar();
            scanf("%c", &opt[i]);
            /*select_sort(TEMP, n);
            if (op=='+') {
                TEMP[n-2] += TEMP[n-1];
                n--;
            } else if (op=='*') {
                TEMP[1] *= TEMP[0];
                TEMP++;
                n--;
            }*/
        }

        ans = calc2(AN, opt);

        printf("%" PRId64 "\n", ans);
    }
    return 0;
}
