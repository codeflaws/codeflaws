#include <stdio.h>
//#include <conio.h>


int main(int argc, char *argv[])
{
    int k, a, b, v, dem = 0, max;
    scanf("%d %d %d %d", &k, &a, &b, &v);
    while (a >= 0)
    {
        if (b >= k - 1)
        {
            max = k*v;
            b = b - (k - 1);
        }
        else
        {
            max = (b + 1)*v;
            b = 0;
        }
        a = a - max;
        dem++;
    }
    printf("%d", dem);
    return 0;
}
