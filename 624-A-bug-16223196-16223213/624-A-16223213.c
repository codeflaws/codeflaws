#include <stdio.h>

int main(int argc, char *argv[])
{
    int d, L, v1, v2;
    char t;
    double dtime;
    scanf("%d %d %d %d", &d, &L, &v1, &v2);
    if ( d < 1 || v2 > 10000 || d >= L)
       return -1;
    dtime = ((L-d)*1.0 / (v1 + v2));
    printf("%f", dtime);
    return 0;    
}
