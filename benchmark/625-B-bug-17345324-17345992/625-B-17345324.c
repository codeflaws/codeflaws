/* Problem: 625B - War of the Corporations */
/* Solver: Gusztav Szmolik */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

unsigned char na[100002];
unsigned char np[32];

int main(int argc, char *argv[])
    {
    unsigned int sl;
    unsigned int i;
    unsigned char* p;
    unsigned int c;
    
    if (scanf("%100001s",na) != 1)
        return -1;
    sl = strlen (na);
    if (sl > 100000)
        return -1;
    for (i = 0; i < sl; i++)
        if (!islower(na[i]))
            return -1;
    if (scanf("%31s",np) != 1)
        return -1;
    sl = strlen (np);
    if (sl > 30)
        return -1;
    for (i = 0; i < sl; i++)
        if (!islower(np[i]))
            return -1;
    p = strstr (na,np);
    c = 0;
    while (p != NULL)
        {
        c++;
        p++;
        p = strstr (p,np);
        }
    printf ("%u\n",c);
    return 0;
    }
