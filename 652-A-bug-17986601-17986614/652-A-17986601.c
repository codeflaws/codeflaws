#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define pi 3.1415926
#define rep(x,ini,end) for(x=(ini);x<(end);x++)
#define per(x,ini,end) for(x=(end-1);x>=(ini);x--)
#define max(x,y) ((x)>(y)?(x):(y))
#define min(x,y) ((x)<(y)?(x):(y))

int main(int argc, char *argv[])
{
    int h1, h2;
    scanf("%d %d", &h1, &h2);
    int a, b;
    scanf("%d %d", &a, &b);

    if (h2-h1<a*8)
    {
        printf("0"); return 0;
    }
    if ((h2-h1>a*8) && (h2+a*8-b*12>0) && (a<=b))
    {
        printf("-1"); return 0;
    }

    int day = 0;
    int dayend,nightend;
    while (1)
    {
        if (day == 0)
        {
            dayend = h1 + a * 8;
        }
        else
        {
            dayend = nightend + a * 12;
        }
        if (dayend>=h2)
        {
            printf("%d",day); return 0;
        }
        nightend = dayend - b * 12;
//        if (nightend<=0)
//        {
//            printf("%d",day+1); return 0;
//        }
        day++;
    }

    return 0;
}
