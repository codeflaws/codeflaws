#include <stdio.h>
//#include <conio.h>

int main(int argc, char *argv[]){
    long x;
    if (x % 5 == 0)
        printf("%ld", x / 5);
    else
        printf("%ld", x / 5 + 1);
    return 0;
}
