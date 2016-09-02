#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
    int n, a[100000], m, o, i, j, k, s;
    scanf("%d", &n);
    if (n == (n & -n))m = n >> 1;
    else for(m = n ; m != (m & -m) ; m &= -m);
    for (i = 0 ; i < n ; ++i)
        scanf("%d", a + i);
    for (i = 1 ; i < n ; ++i){
        s = 0;
        for (j = 0 ; j < i ; ++j){
            for (k = j, o = m ; k < i ; k += o){
                while (k + o >= n)o >>= 1;
                s += a[j];
            }
        }
        printf("%d\n", s);
    }
    scanf(" ");
    return 0;
}
