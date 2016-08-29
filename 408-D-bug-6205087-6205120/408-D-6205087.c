#include <stdio.h>

int a[10000], p[10000];
int main(int argc, char *argv[])
{
    int i,n,k,j;
    
    a[0] = 0;
    
    scanf ("%d", &n);
    
    for (i = 1; i <= n; i++) {
        scanf ("%d", &p[i]);
    }
    
    for (i = 1; i <= n; i++) {
        a[i] = a[i - 1] + 1 + a[i - 1]+ 1 - a[p[i] - 1];
        //printf ("%d ", a[i]);
        a[i] = a[i] % 1000000007;
    }
    
    printf ("%d\n", a[n]);
   // getch ();
    return 0;
}
