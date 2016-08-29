#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n, suf[] = {170,20,200,110,50,80}, P = sizeof suf / sizeof *suf;
  scanf ("%d", &n);

  if (n < 3)
    printf ("-1\n");
  else if (n == 3) 
    printf ("210\n");
  else {
    int i;
    printf ("1");
    for (i = 0; i < n-4; ++i)
      printf ("0");
    printf ("%3d\n", suf[n % P]);
  }
  exit (EXIT_SUCCESS);
return 0;
}
