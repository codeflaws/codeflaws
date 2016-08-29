#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int sh , uh, A, B, C, D, E, n, i, max = 0 , timi;
    char s[21], fs[21];
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
          scanf("%s%d%d%d%d%d%d%d", &s, &sh, &uh, &A, &B, &C, &D, &E);
          timi = sh*100 - uh*50 + A + B + C + D + E;
          if(timi > max)
          {
                 max = timi;   
                 strcpy(fs, s);
          }
    }
    printf("%s", fs);
    return 0;
}      
