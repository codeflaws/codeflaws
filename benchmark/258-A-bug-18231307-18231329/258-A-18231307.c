#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]){
    char a[100001];
    long i, n = strlen(a);
    scanf("%s", &a);
    int kt = 0;
    for (i = 0; i < n - 1; i++)
        if ((kt == 0) && (a[i] == '0')) kt++;
        else
            printf("%c",a[i]);
    if (kt != 0) printf("%c",a[strlen(a) - 1]);
    return 0;
}
