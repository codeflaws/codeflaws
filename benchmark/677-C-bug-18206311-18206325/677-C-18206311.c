#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
int get(char ch){
    if (isdigit(ch)) return ch - 48;
    if (isupper(ch)) return ch - 'A' + 10;
    if (islower(ch)) return ch - 'a' + 36;
    if (ch == '-') return 62;
    if (ch == '_') return 63;
}
int main(int argc, char *argv[]){
    int And[64] = {0};
    int i = 0, j = 0;
    for(i = 0; i < 64; i++)
        for(j = 0; j < 64; j++)
            And[i & j]++;
    long long int ans = 1;
    char s[100001];
    scanf("%s", s);
    i = 0;
    while(s[i]){
        ans *= And[get(s[i])];
        ans &= 1000000007;
        i++;
    }
    printf("\n%I64d", ans);
    return 0;
}
