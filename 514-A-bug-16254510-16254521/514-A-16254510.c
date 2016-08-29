#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char** argv) {
    char line[1024];
    scanf("%[^\n]",line);
    
    int length = strlen(line);
    for (int i = 0; i < length; i++) {
        int num = line[i] - '0';
        if (num == 9 && i==0) {
            break;
        }
        if (num >= 5) {
            line[i] = (char)(9 - num + '0');
        }
    }
    printf("%s\n", line);
return 0;
}
