#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) { 
    char string[100];

    scanf("%s", string);

    if (string[0] >= 65 || string[0] <= 90) {
        string[0] = toupper(string[0]);
        printf("%s\n", string);
    } else {
        printf("%s\n", string);
    }
    
    return 0;
}
