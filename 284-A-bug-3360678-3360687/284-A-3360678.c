#include <stdio.h>

int main(int argc, char *argv[])
{
    int p, x, j, s, t;
    scanf("%d", &p);
    for (x=2, s=0; x<p; x++, s++){
        t = x % p;
        for (j=2; j<p-1; j++){
            t = (t+1) % p;
            if (t){
                t = t * x;
            }
            else {
                s--;
                break;
            }
        }
    }
    printf("%d", s);
    return 0;
}
