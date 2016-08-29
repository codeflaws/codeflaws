#include <stdio.h>

int main(int argc, char **argv)
{
    float mid;
    int n, m, a;
    
    scanf("%d %d", &n, &m);      
    
    mid = n / 2.0;
    
    a = m > mid ? m - 1: m + 1;
    
    if (n == 1) {
        printf("1\n");
    } else {
        printf("%d\n", a);
    }
    
	return 0;
}
