#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char s[1005];
    int i = 0, k, arr[26], max = 0;
    long long int sum = 0;
    scanf("%s", &s);
    scanf("%d", &k);
    for (i = 0; i < strlen(s); i++){
        scanf("%d", &arr[i]);
        if (max < arr[i]) max = arr[i];
    }
    for (i = 0; i < strlen(s)+k; i++){
        if (i < strlen(s)) sum += ((i+1) * arr[s[i] - 'a']);
        else sum += ((i+1) * max);
    }
    printf("%I64d\n", sum);
    return 0;
}
