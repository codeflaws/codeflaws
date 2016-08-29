#include <stdio.h>
#include <stdlib.h>
#define size 100001
char n[size];
int alphabet[26];
int main(int argc, char *argv[])
{
    int k, i, j, length, m = 0, x;
    scanf ("%s", n);
    scanf ("%d", &k);
    length = strlen (n);
    for (i = 0; i < 26; i++)
        alphabet[i] = 0;
    for (i = 0; i < length; i++)
        alphabet[n[i]-'a']++;
    for (i = 0; i < 26; i++)
        if (alphabet[i] != 0)
            m++;
    for (i = 1; i <= k; i++)
        for (j = 0; j < 26; j++)
            if (alphabet[j] == i)
            {
                m--;
                k -= i;
                alphabet[j] = 0;
                for (x = 0; x < length; x++)
                    if (n[x] == j + 'a')
                        n[x] = 0;
            }
    printf ("%d\n", m);
    for (i = 0; i < length; i++)
        if (n[i] != 0)
            printf("%c", n[i]);
    printf("\n");
    return 0;
}
