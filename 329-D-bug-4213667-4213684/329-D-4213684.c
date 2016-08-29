// write in C...
#include <stdio.h>

#ifdef DEBUG
#define D(x...) fprintf(stderr, x)
#else
#define D(x...)
#endif

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    if (n == 3) {
        printf(
                ">vv\n"
                "^<.\n"
                "^.<\n"
                "1 3\n"
              );
    } else if (n == 5) {
        printf(
                ">...v\n"
                "v.<..\n"
                "..^..\n"
                ">....\n"
                "..^.<\n"
                "1 1\n"
              );
    } else {
        int i, j;
        for (i = 0; i < 50; i++) {
            printf("v");
            for (j = 0; j < 33; j++) printf(".<");
            for (j = 1; j < 33; j++) printf("<");
            printf(".\n");

            for (j = 1; j < 33; j++) printf(">");
            for (j = 0; j < 33; j++) printf(">.");
            printf("^");
            printf(".\n");
        }
        printf("100 99\n");
    }
    return 0;
}

