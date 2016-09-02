/* Problem: 493A - Vasya and Football */
/* Solver: Gusztav Szmolik */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

unsigned short teamok (unsigned char*);

int main(int argc, char *argv[])
    {
    unsigned char tmh[22];
    unsigned char tma[22];
    unsigned short n;
    unsigned short i;
    unsigned short h[99];
    unsigned short a[99];
    unsigned short t;
    unsigned char wt[3];
    unsigned short m;
    unsigned char cd[3];
    unsigned short tp;
    unsigned short* p;
    
    if (scanf("%21s",tmh) != 1)
        return -1;
    if (!teamok(tmh))
        return -1;
    if (scanf("%21s",tma) != 1)
        return -1;
    if (!teamok(tma))
        return -1;
    if (!strcmp(tmh,tma))
        return -1;
    if (scanf("%hu",&n) != 1)
        return -1;
    if (n < 1 || n > 90)
        return -1;
    for (i = 0; i < 99; i++)
        h[i] = a[i] = 0;
    for (i = 0; i < n; i++)
        {
        if (scanf("%hu %2s %hu %2s",&t,wt,&m,cd) != 4)
            return -1;
        if (t < 1 || t > 90)
            return -1;
        if (i && t <= tp)
            return -1;
        tp = t;
        if (m < 1 || m > 99)
            return -1;
        if (strlen(wt) != 1 || strlen(cd) != 1)
            return -1;
        if ((wt[0] != 'h' && wt[0] != 'a') || (cd[0] != 'y' && cd[0] != 'r'))
            return -1;
        p = (wt[0] == 'h' ? h : a);
        if (cd[0] == 'y' && !p[m-1])
            p[m-1] = 1;
        else
            {
            p[m-1] = 2;
            printf ("%s %hu %hu\n",(wt[0] == 'h' ? tmh : tma),m,t);
            }
        }
    return 0;
    }
    
unsigned short teamok (tm)
    unsigned char* tm;
    {
    unsigned short tl;
    unsigned short i;
    
    tl = strlen (tm);
    if (tl > 20)
        return 0;
    for (i = 0; i < tl; i++)
        if (!isupper(tm[i]))
            return 0;
    return 1;
    }
