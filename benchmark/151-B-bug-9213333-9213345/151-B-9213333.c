#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(int argc, char *argv[])
{
    char a[100][25], c[100][100][9];
    int i, j, b[100][100][9], n, d[100], k, l = 0, m, dif, sam, e[100][3],PN,MAX1,MAX2,MAX3;
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
            e[i][j] = 0;
    }
    for (i = 0; i < 100; i++)
        d[i] = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d%s", &d[i], a[i]);
        getchar();
        for (j = 0; j < d[i]; j++)
        {
            scanf("%s", c[i][j]);
            l = 0;
            for (k = 0; k <= 8; k++)
            {
                if (isdigit(c[i][j][k]))
                {
                    b[i][j][l] = c[i][j][k];
                    ++l;
                }
            }
            getchar();
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < d[i]; j++)
        {
            dif = 0;
            sam = 0;
            for (k = 0; k < 6; k++)
            {
                for (m = k + 1; m < 6; m++)
                {
                    if (b[i][j][k] == b[i][j][m])
                        ++sam;
                    else if (b[i][j][k] > b[i][j][m])
                        ++dif;
                }
            }
            if (sam == 15)
                e[i][0]++;
            else if (dif == 15)
                e[i][1]++;
            else
                e[i][2]++;
        }
    }
    MAX1 = e[0][0];
    MAX2 = e[0][1];
    MAX3 = e[0][2];
    for (i = 0; i < n; i++)
    {
        if (MAX1<e[i][0])
            MAX1 = e[i][0];
        if (MAX2<e[i][1])
            MAX2 = e[i][1];
        if (MAX3<e[i][2])
            MAX3 = e[i][2];
    }
    PN = 0;
    printf("If you want to call a taxi, you should call: ");
    for (i = 0; i < n; i++)
    {
        if (e[i][0] == MAX1)
        {
            if (PN==0)
            printf(" %s", a[i]);
            else
            printf(", %s", a[i]);
            ++PN;
        }
    }
    printf(".\n");
    PN = 0;
    printf("If you want to order a pizza, you should call:");
    for (i = 0; i < n; i++)
    {
        if (e[i][1] == MAX2)
        {
            if (PN == 0)
                printf(" %s", a[i]);
            else
                printf(", %s", a[i]);
            ++PN;
        }
    }
    printf(".\n");
    PN = 0;
    printf("If you want to go to a cafe with a wonderful girl, you should call:");
    for (i = 0; i < n; i++)
    {
        if (e[i][2] == MAX3)
        {
            if (PN == 0)
                printf(" %s", a[i]);
            else
                printf(", %s", a[i]);
            ++PN;
        }
    }
    printf(".");
    return 0;
}