#include <stdio.h>
int main(int argc, char *argv[])
{
    int d1, d2, d3;
    scanf("%d %d %d", &d1, &d2, &d3);
        if (d1+d2==d3)
            printf("%d", d1+d3+d2);
        else if (d1+d2<=d3)
            printf("%d", (d1+d2)*2);
        else if (d1>=d2+d3)
            printf("%d", (d2+d3)*2);
        else if (d2>=d1+d3)
            printf("%d", (d1+d3)*2);
        else if (d1==d2 && d2==d3)
            printf("%d", d1+d2+d3);
        else if (d1+d2>d3)
            printf("%d", d1+d3+d2);
    return 0;
}