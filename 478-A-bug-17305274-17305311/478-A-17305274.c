#include<stdio.h>

int main(int argc, char *argv[])
{
    int c1, c2, c3, c4, c5, x;
    scanf("%d %d %d %d %d", &c1, &c2, &c3, &c4, &c5);

    x=c1+c2+c3+c4+c5;

    if(c1==c2 && c2==c3 && c3==c4 && c4==c5)
    {
        printf("-1");
    }
    else if(x%5==0)
    {
        printf("%d", x/5);
    }
    else
    {
        printf("-1");
    }

    return 0;
}
