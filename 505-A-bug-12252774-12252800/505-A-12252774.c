#include <stdio.h>
#include <string.h>
#include <malloc.h>
#define li long int
#define lli long long int
#define szf sizeof
#define givemem(t, n) (t*)malloc(sizeof(t) * (n))
#define sstr(x) scanf("%s", x)
#define si(x) scanf("%d", &x)
#define pi(x) printf("%d", x)
#define sli(x) scanf("%ld", &x)
#define pli(x) printf("%ld", x)
#define slli(x) scanf("%lld", &x)
#define plli(x) printf("%lld", x)
#define sc(x) scanf("%c", &x)
#define pc(x) printf("%c", x)
#define newl() printf("\n")
#define fl(i, val, n) for(i = (val);i < (n);i++)
#define fln(i, val, n) for(i = (val);i > (n);i--)
char str[15];
int checkPal(int l, int r) {
    while(l <= r) {
        if(str[l] != str[r])
            return 0;
        l++;
        r--;
    }
    return 1;
}
int main(int argc, char *argv[]) {
    int r, l = 0, len, i;
    sstr(str);
    len = strlen(str);
    r = len - 1;
    if(checkPal(l, r)) {
        r = len / 2;
        fl(i, 0, len) {
            if(i == r)
                pc(str[r]);
            pc(str[i]);
        }
    }
    while(l <= r) {
        if(str[l] == str[r]) {
            l++;
            r--;
        }
        else {
            if(checkPal(l + 1, r)) {
                fl(i, 0, len) {
                    if(i == (r + 1))
                        pc(str[l]);
                    pc(str[i]);
                }
                if(i == (r + 1))
                    pc(str[l]);
                return 0;
            }
            else if(checkPal(l, r - 1)) {
                fl(i, 0, len) {
                    if(i == l)
                        pc(str[r]);
                    pc(str[i]);
                }
                return 0;
            }
            else
                printf("NA");
            return 0;
        }
    }
}
