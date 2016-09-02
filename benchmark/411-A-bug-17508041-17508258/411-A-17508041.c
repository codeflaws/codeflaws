#include <stdio.h>
#include <string.h>
#include <ctype.h>

int i, k1, k2, k3, k4;
char a[105];

int main(int argc, char *argv[]) {
    scanf("%s",a);
    for(i = 0 ; a[i] ; i++)
        if(isupper(a[i]))
            k2 = 1;
        else if(islower(a[i]))
            k3 = 1;
        else if(a[i] <= '9' && a[i] >= '0')
            k4 = 1;
    if(i > 5)
        k1 = 1;
    if(k1 && k2 && k3 && k4)
        printf("Correct");
    else
        printf("Too weak");
    return 0;
}