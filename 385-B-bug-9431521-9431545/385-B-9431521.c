#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    long int i, j, k, l, m, n;

    char s[5001];
    scanf("%s", s);

    long int a[2000];
    long int b[2000];

    j = 0;
    n = strlen(s);
    for(i = 0; i < n - 3; i++){
        if(s[i] == 'b' && s[i + 1] == 'e' && s[i + 2] == 'a' && s[i + 3] == 'r'){
            a[j] = i;
            b[j] = i + 3;
            j++;
        }
    }

    k = ((a[0] + 1) * (n - b[0]));
    for(i = 1; i < j; i++){
        k += ((a[i] - a[i - 1]) * (n - b[i]));
    }

    printf("%ld\n", k);
    return 0;
}
