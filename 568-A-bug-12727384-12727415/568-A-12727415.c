#include <stdio.h>

#define MAXN    10000001

char NotPrime[MAXN];

void SieveOfEratosthenes()
{
    int i, j;
    NotPrime[0] = 1;
    NotPrime[1] = 1;
    for(i = 2; i < MAXN; ++i) {
        if(!NotPrime[i]) {
            for(j = i + i; j < MAXN; j += i) {
                NotPrime[j] = 1;
            }
        }
    }
}

int IsPalindromic(int N)
{
    if(N < 10) {
        return 1;
    }
    int i, j, Len = 0;
    char NumDigit[10];
    while(N) {
        NumDigit[Len++] = N % 10;
        N /= 10;
    }
    for(i = 0, j = Len - 1; i < j; ++i, --j) {
        if(NumDigit[i] != NumDigit[j]) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char *argv[])
{
    SieveOfEratosthenes();
    int Ans = -1, p, q, i;
    long long pi = 0, rub = 0;
    scanf("%d %d", &p, &q);
    for(i = 1; i < MAXN; ++i) {
        if(!NotPrime[i]) {
            ++pi;
        }
        if(IsPalindromic(i)) {
            ++rub;
        }
        if(q * pi <= p * rub) {
            Ans = i;
        }
    }
    if(Ans == -1) {
        puts("Palindromic tree is better than splay tree");
        return 0;
    }
    printf("%d\n", Ans);
    return 0;
}
