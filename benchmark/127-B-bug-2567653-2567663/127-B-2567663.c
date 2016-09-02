#include <stdio.h>
#define max_n 100

int main(int argc, char *argv[])

{
    int a[max_n]; int kolpal[max_n+1]; int i; int kol; int N;
    scanf("%d", &N);
    kol = 0;

    for(i = 1; i < max_n+1; ++i)
        kolpal[i] = 0;


    for (i = 0; i < N; ++i)
        {
            scanf("%d", &a[i]);
            kolpal[a[i]] += 1; 
        }

    for (i = 1; i < max_n+1; ++i)
        kol += kolpal[i] / 2;


    printf("%d", kol/2);

    return 0;
}

