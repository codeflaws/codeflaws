/* Problem: 160B - Unlucky Ticket */
/* Solver: Gusztav Szmolik */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int cmp (const void*, const void*);

int main(int argc, char *argv[])
    {
    unsigned short n;
    unsigned short dn;
    unsigned char s[202];
    unsigned short i;
    unsigned short ut;
    short d;
    
    if (scanf("%hu",&n) != 1)
        return -1;
    if (n < 1 || n > 100)
        return -1;
    dn = 2*n;
    if (scanf("%201s",s) != 1)
        return -1;
    if (strlen(s) != dn)
        return -1;
    for (i = 0; i < dn; i++)
        if (!isdigit(s[i]))
            return -1;
    qsort (s,n,sizeof(unsigned char),cmp);
    qsort (s+n,n,sizeof(unsigned char),cmp);
    if (s[0] == s[n])
        ut = 0;
    else
        {
        d = (s[0] > s[n] ? 1 : -1);
        ut = 1;
        }
    for (i = 1; i < n && ut; i++)
        if ((d == -1 && s[i] > s[n+i]) || (d == 1 && s[i] < s[n+i]))
            ut = 0;
    printf (ut ? "YES\n" : "NO\n");
    return 0;
    }
    
int cmp (p1,p2)
    const void* p1;
    const void* p2;
    {
    unsigned char d1;
    unsigned char d2;
    
    d1 = *(unsigned char*)p1;
    d2 = *(unsigned char*)p2;
    if (d1 == d2)
        return 0;
    return (d1 > d2 ? 1 : -1);
    }
