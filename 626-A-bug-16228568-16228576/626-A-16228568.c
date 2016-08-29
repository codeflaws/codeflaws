#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, i, j, cnt, x, m=0, t=0, a=0, b=0;
    scanf("%d", &n);
    if (n < 1 && n > 200)
        return 0;
    char mas[n+1];
    scanf("%s", mas);
    for(cnt = 0; cnt < n; cnt++)
    {
        t = cnt+1;
        while(t < n)
        {
            j = 0;
            i = 0;
            for(x = cnt; x <= t; x++)
            {
                if(mas[x] == 'U')
                {
                    j++;
                }
                if(mas[x] == 'D')
                {
                    j--;
                }
                if(mas[x] == 'R')
                {
                    i++;
                }
                if(mas[x] == 'L')
                {
                    i--;
                }
                printf("\n(%d;%d)", i, j);
            }
            if(i == 0 && j == 0)
                m++;
            t++;
        }
    }
    printf("\n%d",m);
    return 0;
}
