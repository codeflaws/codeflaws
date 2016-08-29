/* Problem: 514B - Han Solo and Lazer Gun */
/* Solver: Gusztav Szmolik */

#include <stdio.h>
#include <stdlib.h>

struct trooper
    {
    short x;
    short y;
    short tn;
    unsigned short td;
    };

unsigned short gcd (unsigned short, unsigned short);
int cmp (const void*, const void*);

int main(int argc, char *argv[])
    {
    unsigned short n;
    short x0;
    short y0;
    unsigned short i;
    short x;
    short y;
    struct trooper st[1000];
    short dx;
    short dy;
    unsigned short g;
    unsigned short sc;
    unsigned short j;
    
    if (scanf("%hu %hd %hd",&n,&x0,&y0) != 3)
        return -1;
    if (n < 1 || n > 1000 || x0 < -10000 || x0 > 10000 || y0 < -10000 || y0 > 10000)
        return -1;
    for (i = 0; i < n; i++)
        {
        if (scanf("%hd %hd",&x,&y) != 2)
            return -1;
        if (x < -10000 || x > 10000 || y < -10000 || y > 10000)
            return -1;
        if (x == x0 && y == y0)
            return -1;
        st[i].x = x;
        st[i].y = y;
        dx = x-x0;
        dy = y-y0;
        if (dx > 0 && dy > 0)
            {
            g = gcd (dx,dy);
            st[i].tn = dy/g;
            st[i].td = dx/g;
            }
        else if (dx > 0 && dy < 0)
            {
            g = gcd (dx,-dy);
            st[i].tn = dy/g;
            st[i].td = dx/g;
            }
        else if (dx < 0 && dy > 0)
            {
            g = gcd (-dx,dy);
            st[i].tn = -dy/g;
            st[i].td = -dx/g;
            }
        else if (dx < 0 && dy < 0)
            {
            g = gcd (-dx,-dy);
            st[i].tn = -dy/g;
            st[i].td = -dx/g;
            }
        else if (!dx)
            {
            st[i].tn = 1;
            st[i].td = 0;
            }
        else if (!dy)
            {
            st[i].tn = 0;
            st[i].td = 1;
            }
        }
    qsort (st,n,sizeof(struct trooper),cmp);
    sc = i = 0;
    while (i < n)
        {
        for (j = i; j < n-1 && st[j+1].tn == st[i].tn && st[j+1].td == st[i].td; j++);
        sc++;
        i = j+1;
        }
    printf ("%hu\n",sc);
    return 0;
    }
    
unsigned short gcd (a,b)
    unsigned short a;
    unsigned short b;
    {
    unsigned short mx;
    unsigned short mn;
    unsigned short t;
    
    mx = (a > b ? a : b);
    mn = (a > b ? b : a);
    while (mn)
        {
        t = mx%mn;
        mx = mn;
        mn = t;
        }
    return mx;
    }
    
int cmp (p1,p2)
    const void* p1;
    const void* p2;
    {
    short n1;
    short n2;
    unsigned short d1;
    unsigned short d2;
    
    n1 = ((struct trooper*)p1)->tn;
    n2 = ((struct trooper*)p2)->tn;
    d1 = ((struct trooper*)p1)->td;
    d2 = ((struct trooper*)p2)->td;
    if (n1 == n2 && d1 == d2)
        return 0;
    if (d1 > d2 || (d1 == d2 && n1 > n2))
        return 1;
    return -1;
    }
