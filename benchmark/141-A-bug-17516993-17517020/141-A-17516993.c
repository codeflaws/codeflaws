#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int arr[26], i, z = 1;
    char x[205];
    scanf("%s", &x);
    for (i = 0; i < strlen(x); i++) arr[x[i]-65]++;
    scanf("%s", &x);
    for (i = 0; i < strlen(x); i++) arr[x[i]-65]++;
    scanf("%s", &x);
    for (i = 0; i < strlen(x); i++) arr[x[i]-65]--;
    for (i = 0; i < 26; i++) if (arr[i]) z = 0;
    printf((z)?"YES\n":"NO\n");
    return 0;
}
