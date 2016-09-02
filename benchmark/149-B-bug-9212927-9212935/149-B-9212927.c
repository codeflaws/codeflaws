#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(int argc, char *argv[])
{
    char a[20];
    int b[10], c[10], i, j, bnum, cnum, num = 0, x, y, z, t = 0,k;

    scanf("%s", a);
    for (i = 0; a[i] != ':'; ++i)
    {
        if (isalpha(a[i]))
        {
            b[i] = (int)a[i] - 55;
        }
        else if (isdigit(a[i]))
        {
            b[i] = (int)a[i] - 48;
        }
    }
    bnum = i;
    ++i;
    for (; i < strlen(a); ++i)
    {
        if (isalpha(a[i]))
        {
            c[i-bnum-1] = (int)a[i] - 55;
        }
        else if (isdigit(a[i]))
        {
            c[i-bnum-1] = (int)a[i] - 48;
        }
    }
    cnum = i - bnum - 1;
    x = b[0];
    y = c[0];
    for (i = 0; i < bnum; i++)
    {
        if (x < b[i])
            x = b[i];
    }
    for (i = 0; i < cnum; i++)
    {
        if (y <c[i])
            y = c[i];
    }
    if (x<y)
        x = y;
    for (i = 0; i <= bnum - 2; i++)
    {
        if (b[i] != 0)
        {
            t = 1;
            break;
        }
    }
    if (t == 0)
    {
        for (i = 0; i <= cnum - 2; i++)
        {
            if (c[i] != 0)
            {
                t = 1;
                break;
            }
        }
    }
    if (b[bnum - 1] > 23)
    {
        printf("0");
        return 0;
    }
    if (t==0||((bnum==1&&cnum==1)&&(b[0]<24)))
        printf("-1");
    else
    {
        num = x + 1;
        for (i = x+1;; i++)
        {
            y = 0;
            z = 0;
            k= 1;
            for (j = bnum-1; j >=0; j--)
            {
                y += b[j] *k ;
                k *= i;
            }
            k = 1;
            for (j = cnum-1; j >= 0;j--)
            {
                z += c[j] * k;
                k *= i;
            }
            if (y>24 || z>59)
                break;
            else
                ++num;
        }
        if (num <= x + 1)
            printf("0");
        else
        {
            for (i = x + 1; i < num; i++)
                printf("%d ", i);
        }
    }

    return 0;
}