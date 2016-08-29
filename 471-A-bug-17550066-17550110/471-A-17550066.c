#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a = 0, b = 0, c = 0, d = 0, e = 0, i = 6, x;
    while (i--){
        scanf("%d", &x);
        if ((a == 0) || (x == a)){a = x; b++;}
        else if ((c == 0) || (x == c)){ c = x; d++;}
        else if ((e == 0) || (x == e)) e = x;
        else b = 10;
    }
    if (b == 10) printf("Alien\n");
    else if ((b == 1) && (d == 1)) printf("Bear\n");
    else if ((b == 4) || (d == 4)) {
        if (((b == 4) && (d == 2)) || ((b == 2) && (d == 4))) printf("Elephant\n");
        else printf("Bear\n");
    }
    else printf("Alien\n");
    return 0;
}
