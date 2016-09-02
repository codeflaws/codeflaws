#include <stdio.h>

int main(int argc, char *argv[]){
    int a, b, i, res1 = 0, res2 = 0, res3 = 0;
    scanf("%d %d", &a, &b);
    for (i = 1; i <= 6; i++)
        if (abs(a-i) > abs(b-i)) res1++;
        else if (abs(a-i) == abs(b-i)) res2++;
        else if (abs(a-i) < abs(b-i)) res3++;
        printf("%d %d %d", res1, res2, res3);
    return 0;
}
