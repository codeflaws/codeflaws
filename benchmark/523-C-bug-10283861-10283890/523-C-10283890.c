#include <stdio.h>

int main(int argc, char *argv[])
{
    char s[1001];
    char t[1000001];
    char *p;
    char *f;
    char *first;
    char *last;
    int c;

    //FILE *in = fopen("input.txt", "r");

    scanf("%s", s);
    scanf("%s", t);

    p = t;
    f = s;

    while (*p != '\0')
    {
        if (*p == *f)
        {
            f++;

            if (*f == '\0')
            {
                first = p;
                break;
            }
        }

        p++;
    }

    while (*p != '\0')
    {
        p++;
    }

    while (p >= t)
    {
        if (*p == *f)
        {
            f--;

            if (f < s)
            {
                last = p;
                break;
            }
        }

        p--;
    }
    //printf("%d %d\n", last - t, first - t);
    c = last - first;
    printf("%d\n", c > 0? c: 0);
    
    return 0;
}
