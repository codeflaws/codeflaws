#include <stdio.h>
float c[1000000], d[1000000], a[1000000], b[1000000];
int main(int argc, char *argv[])
{
    int i, j, k, n, r, r1, x, y, k2, l, p, o, m;
    
    scanf ("%d%d", &r, &r1);
    x = 0;
    y = r;
    j = 0;
    k = 0;
    while (x <= r && y >= 0) {
          
          while(x*x + y*y > r*r) {
                    y--;
                    j++;
                  //  printf ("shubh    %d", y);
                  //  if (j == 10)
                  //  break;
          }
         
           //  printf ("mudita");
           // break;
          if (x * x + y * y == r * r) {
                c[k] = x;
                d[k] = y;
                k++;
               // printf ("%d %d\n", x, y);
          } 
          x++;
    }
    y = r1;
    x = 0;
    k2 = 0;
    while (x >= (-1) *r1 && y >= 0) {
          
          while(x*x + y*y > r1*r1) {
                    y--;
                    j++;
                  //  printf ("shubh    %d", y);
                  //  if (j == 10)
                  //  break;
          }
         
           //  printf ("mudita");
           // break;
          if (x * x + y * y == r1 * r1) {
                a[k2] = x;
                b[k2] = y;
                k2++;
               // printf ("%d %d\n", x, y);
          } 
          x--;
    }
    x = 0;
    for (i = 0; i < k; i++) {
        for (j = 0; j < k2; j++) {
            if (c[i] != 0 && a[j] != 0) {
            if (((d[i]/c[i]) * (b[j]/a[j]) == -1) && c[i] != a[j] && d[i] != b[j]) {
                            l = a[j];
                            p = b[j];
                            o = c[i];
                            m = d[i];
                            printf ("YES\n%d %d\n%d %d\n0 0\n", l, p, o, m);
                            x = 1;
                            break;
            }
            }
        }
        if (x == 1)
        break;
    }
    
    if (x == 0)
    printf ("NO\n");
            
    
    return 0;
}      
