#include <stdio.h>

int main(int argc, char *argv[])
{
  int a, b, m, r0;
  int r[1000], t=0, i, k;
  
  scanf("%d %d %d %d", &a, &b, &m, &r0);
  i = 1;
  for(;;)
  {
    r0 = (a * r0 + b) % m;
    if(r[r0] !=0)
    { 
      t = i - r[r0];
      goto F;
    }
    r[r0] = i;
    i++;
  }

F:  printf("%d\n", t);
  return 0.; 
}


