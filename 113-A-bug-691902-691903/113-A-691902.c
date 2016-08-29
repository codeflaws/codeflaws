#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MASCULINE 1
#define FEMININE 2

int check(char* input, char* s1, char *s2)
{
    if (!strstr(input, s1) && !strstr(input, s2)) return 0;

    if (strstr(input, s1) != NULL)
    {

        if (strcmp(input + strlen(input) - strlen(s1), s1) == 0) return MASCULINE;
    }

    if (strstr(input, s2) != NULL)
    {
        if (strcmp(input + strlen(input) - strlen(s2), s2) == 0) return MASCULINE;
    }

    return 0;
}



int main(int argc, char *argv[])
{
    int count, state, gender = 0;
    char input[100001];
    char ma[] = "lios", fa[] = "liala", mn[] = "etr", fn[] = "etra", mv[] = "initis", fv[] = "inites";

    gets(input);

    if (strchr(input, ' ') == NULL && (check(input, ma, fa) || check(input, mn, fn) || check(input, mv, fv)))
    {
        puts("YES");
        return 0;
    }

    state = 1;

    char* pch = strtok (input, " ");
    while (pch != NULL)
    {
        switch (state) {
            case 1:
                if (check(pch, ma, fa)) {
                    if (gender == 0) {
                        gender = check(pch, ma, fa);
                    } else if (check(pch, ma, fa) != gender){
                        state = 3;
                    }
                } else if (check(pch, mn, fn)){
                    if (gender != 0) {
                        if (gender == check(pch, mn, fn)){
                            state = 2;
                        } else state = 3;
                    } else {
                        state = 2;
                        gender = check(pch, mn, fn);
                    }
                } else state = 3;
                break;
            case 2:
                if (check(pch, mv, fv)) {

                    if (gender == check(pch, mv, fv)){
                        state = 2;
                    } else state = 3;
                } else state = 3;
                break;
            case 3:
                puts("NO");
                return 0;
                break;
        }
        pch = strtok (NULL, " ");
    }

    if (state == 2) {
        puts("YES");
    } else puts("NO");

    return 0;
}
