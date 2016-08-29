//      Burglar and Matches.c
//      
//      Copyright 2012 Administrator <cpy@ubuntu>
//      
//      This program is free software; you can redistribute it and/or modify
//      it under the terms of the GNU General Public License as published by
//      the Free Software Foundation; either version 2 of the License, or
//      (at your option) any later version.
//      
//      This program is distributed in the hope that it will be useful,
//      but WITHOUT ANY WARRANTY; without even the implied warranty of
//      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//      GNU General Public License for more details.
//      
//      You should have received a copy of the GNU General Public License
//      along with this program; if not, write to the Free Software
//      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
//      MA 02110-1301, USA.


#include <stdio.h>
#include <stdlib.h>

struct matchbox
{
    int a;
    int b;
} c[20];

int cmp(const void *x, const void *y)
{
    struct matchbox *p = (struct matchbox *)x;
    struct matchbox *q = (struct matchbox *)y;
    return q->b - p->b;
}

void func(int n, int m)
{
    int ans = 0, i = 0;
    qsort(c, m, sizeof(struct matchbox), cmp);
    while (n > 0)
    {
        if (n >= c[i].a)
        {
            n -= c[i].a;
            ans += c[i].a * c[i].b;
        }
        else
        {
            ans += n * c[i].b;
            n = 0;
        }
        i ++;
    }
    printf("%d\n", ans);
}

int main(int argc, char **argv)
{
    int n, m, i;
    while (scanf("%d%d", &n, &m) == 2)
    {
        for (i = 0; i < m; i ++)
        {
            scanf("%d%d", &c[i].a, &c[i].b);
        }
        func(n, m);
    }
    return 0;
}