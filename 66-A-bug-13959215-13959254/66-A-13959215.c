#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char c, numero[21];
    int n = 0;

    scanf("%[^\n]",numero);

    //printf("%d",strlen(numero));
    n=strlen(numero);

        if(((strcmp(numero, "127")) <= 0 && n <= 3) || n < 3)
        {
            printf("byte");
            return 0;
        }
        if(((strcmp(numero, "32767")) <= 0 && n <= 5) || n < 5)
        {
            printf("short");
            return 0;
        }
        if(((strcmp(numero, "2147483647")) <= 0 && n <= 10) || n < 10)
        {
            printf("int");
            return 0;
        }
        if(((strcmp(numero, "9223372036854775807")) <= 0 && n <= 19) || n < 19)
        {
            printf("long");
            return 0;
        }
        else
        {
            printf("BigInteger");
            return 0;
        }
    return 0;
}
